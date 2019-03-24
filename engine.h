int pieceval(char inpiece) {
	if (inpiece == 'p') return 100;
	if (inpiece == 'n') return 300;
	if (inpiece == 'b') return 300;
	if (inpiece == 'r') return 500;
	if (inpiece == 'q') return 900;
	if (inpiece == 'k') return 9999;
	if (inpiece == 'P') return 100;
	if (inpiece == 'N') return 300;
	if (inpiece == 'B') return 300;
	if (inpiece == 'R') return 500;
	if (inpiece == 'Q') return 900;
	if (inpiece == 'K') return 9999;
	assert(0);
	printf("inpiece: %d\n",inpiece);
	return 0;
}
int evalBoard(struct position *pos) {
	int score = 0;
	for (int i = 0;i<64;i++) {
		char piece = pos->board[i];
		if (piece != '0') {
			int pval = pieceval(piece);
			if ((piece >= 'a') && (piece <= 'z')) {
				pval = -pval;
			}
			int pstscore = PSTval(piece,i);
			score += pstscore;
			score += pval;
		}
	}
	if (pos->tomove == BLACK) return -score;
	return score;
}
int negaMax(struct position *pos,int depth,int timeLeft) {
	assert(depth >= 0);
	nodesSearched++;
	if (depth == 0) {
		return evalBoard(pos);
	}
	int kingpos;
	struct move moves[MAX_MOVES];
	int maxScore = -9999;
	int num_moves = genLegalMoves(pos,moves);
	clock_t begin = clock();
	int timeElapsed = 0;
	/*
	if (num_moves == 0) {
		if (pos->tomove == WHITE) kingpos = pos->Wkingpos;
		if (pos->tomove == BLACK) kingpos = pos->Bkingpos;
		int incheck = isCheck(pos,kingpos);
		if (incheck) {
			return -9999;
		}
		else {
			return 0;
		}
	}
	 */
	int numcheckmoves = 0;
	for (int i = 0;(i < num_moves && timeElapsed == 0);i++) {
		clock_t end = clock();
		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		int time_spentms = (int)(time_spent * 1000);
		if (time_spentms >= timeLeft) {
			timeElapsed = 1;
			break;
		}
		makeMove(&moves[i],pos);
		pos->tomove = !pos->tomove;
		if (pos->tomove == WHITE) kingpos = pos->Wkingpos;
		if (pos->tomove == BLACK) kingpos = pos->Bkingpos;
		int incheck = isCheck(pos,kingpos);
		if (incheck) {
			unmakeMove(pos);
			numcheckmoves++;
			continue;
		}
		pos->tomove = !pos->tomove;
		int score = -negaMax(pos,depth - 1, (timeLeft - time_spentms));
		unmakeMove(pos);
		if (score > maxScore) {
			maxScore = score;
		}
	}
	//printf("%d - %d\n",num_moves,numcheckmoves);
	if (num_moves == numcheckmoves) {
		// no legal moves
		if (pos->tomove == WHITE) kingpos = pos->Wkingpos;
		if (pos->tomove == BLACK) kingpos = pos->Bkingpos;
		int incheck = isCheck(pos,kingpos);
		if (incheck) {
			// side to move is in checkmate
			return -99999;
		}
		else {
			// stalemate
			return 0;
		}
	}
	if (isThreefold(*pos)) return 0;
	if (pos->halfmoves >= 100) return 0;
	return maxScore;
}
int alphaBeta(struct position *pos, int alpha, int beta, int depthleft, int timeLeft) {
	nodesSearched++;
	if (isThreefold(*pos)) return 0;
	if (pos->halfmoves >= 100) return 0;
	if (depthleft == 0) {
		return evalBoard(pos);
	}
	int kingpos;
	struct move moves[MAX_MOVES];
	int maxScore = -9999;
	int num_moves = genLegalMoves(pos,moves);
	clock_t begin = clock();
	int timeElapsed = 0;
	int numcheckmoves = 0;
	for (int i = 0;(i < num_moves && timeElapsed == 0);i++) {
		clock_t end = clock();
		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		int time_spentms = (int)(time_spent * 1000);
		if (time_spentms >= timeLeft) {
			timeElapsed = 1;
			break;
		}
		makeMove(&moves[i],pos);
		pos->tomove = !pos->tomove;
		if (pos->tomove == WHITE) kingpos = pos->Wkingpos;
		if (pos->tomove == BLACK) kingpos = pos->Bkingpos;
		int incheck = isCheck(pos,kingpos);
		if (incheck) {
			unmakeMove(pos);
			numcheckmoves++;
			continue;
		}
		pos->tomove = !pos->tomove;
		/*
		if (isThreefold(*pos)) {
			unmakeMove(pos);
			return 0;
		}
		if (pos->halfmoves >= 100) {
			unmakeMove(pos);
			return 0;
		}
		 */
		int score = -alphaBeta(pos,-beta,-alpha, depthleft - 1,(timeLeft - time_spentms));
		unmakeMove(pos);
		if (score >= beta) {
			return beta;
		}
		if (score > alpha) {
			alpha = score;
		}
	}
	//printf("%d - %d\n",num_moves,numcheckmoves);
	if (num_moves == numcheckmoves) {
		// no legal moves
		if (pos->tomove == WHITE) kingpos = pos->Wkingpos;
		if (pos->tomove == BLACK) kingpos = pos->Bkingpos;
		int incheck = isCheck(pos,kingpos);
		if (incheck) {
			// side to move is in checkmate
			return -99999;
		}
		else {
			// stalemate
			return 0;
		}
	}
	return alpha;
}
struct move search(struct position pos, int searchdepth,int movetime) {
	int bestScore = -9999;
	nodesSearched = 0;
	struct move moves[MAX_MOVES];
	int kingpos;
	struct move bestmove = moves[0];
	clock_t begin = clock();
	int timeElapsed = 0;
	double time_spent;
	int curdepth;
	int nps;
	int num_moves = genLegalMoves(&pos,moves);
	struct move lastbestmove = moves[0];
	for (curdepth = 1; (curdepth < searchdepth+1 && timeElapsed == 0);curdepth++) {
		int bestScore = -9999;
		for (int i = 0;i < num_moves;i++) {
			clock_t end = clock();
			time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
			int time_spentms = (int)(time_spent * 1000);
			if (time_spentms >= movetime) {
				bestmove = lastbestmove;
				timeElapsed = 1;
				break;
			}
			makeMove(&moves[i],&pos);
			pos.tomove = !pos.tomove;
			if (pos.tomove == WHITE) kingpos = pos.Wkingpos;
			if (pos.tomove == BLACK) kingpos = pos.Bkingpos;
			int incheck = isCheck(&pos,kingpos);
			if (incheck) {
				unmakeMove(&pos);
				continue;
			}
			pos.tomove = !pos.tomove;
			int curscore;
			//int curscore = -negaMax(&pos,curdepth-1,(movetime - time_spentms));
			if (isThreefold(pos)) {
				curscore = 0;
			}
			else if (pos.halfmoves >= 100) {
				curscore = 0;
			}
			else {
				curscore = -alphaBeta(&pos,-99999,99999,curdepth-1,(movetime - time_spentms));
			}
			//printf("%d - %s - %d\n",curdepth,movetostr(moves[i]),curscore);
			if (curscore == 99999) {
				printf("info depth %d nodes %d time %d nps %d score mate %d pv %s\n",(curdepth),nodesSearched,((int)(time_spent*1000)),nps,curdepth,movetostr(moves[i]));
				fflush(stdout);
				unmakeMove(&pos);
				return moves[i];
			}
			if (curscore > bestScore) {
				bestScore = curscore;
				bestmove = moves[i];
			}
			unmakeMove(&pos);
			nps = nodesSearched / time_spent;
		}
		lastbestmove = bestmove;
		printf("info depth %d nodes %d time %d nps %d score cp %d pv %s\n",(curdepth),nodesSearched,((int)(time_spent*1000)),nps,bestScore,movetostr(bestmove));
		fflush(stdout);
	}
	return bestmove;
}
/*
int alphaBeta( int alpha, int beta, int depthleft ) {
   if( depthleft == 0 ) return quiesce( alpha, beta );
   for ( all moves)  {
      score = -alphaBeta( -beta, -alpha, depthleft - 1 );
      if( score >= beta )
         return beta;   //  fail hard beta-cutoff
      if( score > alpha )
         alpha = score; // alpha acts like max in MiniMax
   }
   return alpha;
}
struct move itersearch(struct position pos, int searchdepth,int movetime) {
	struct move moves[MAX_MOVES];
	struct move bestmove;
	int num_moves = genLegalMoves(&pos,moves);
	clock_t start = clock();
	int timeElapsed = 0;
	for (int i = 0;(i < searchdepth && timeElapsed == 0);i++) {
		clock_t end = clock();
		double tot_time_spent = (double)(end - start) / CLOCKS_PER_SEC;
		int tot_time_spentms = (int)(tot_time_spent * 1000);
		clock_t begin = clock();
		struct move lastbestmove = bestmove;
		bestmove = search(pos, i+1,(movetime - tot_time_spentms));
		end = clock();
		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		int time_spentms = (int)(time_spent * 1000);
		if (time_spent < 0.001) time_spent = 0.001;
		int nps = nodesSearched / time_spent;
		if (time_spentms >= movetime) {
			timeElapsed = 1;
			bestmove = lastbestmove;
		}
		printf("info depth %d nodes %d time %d nps %d\n",(i+1),nodesSearched,((int)(time_spent*1000)),nps);
	}
	return bestmove;
}
 */
/*
def negaMax(depth):
    globals.nodesSearched += 1
    if depth == 0:
        return evalBoard(globals.board)
    maxScore = -9999
    for move in globals.board.legal_moves:
        move = str(move)
        globals.board.push_uci(move)
        score = -negaMax(depth - 1)
        globals.board.pop()
        if score > maxScore:
            maxScore = score
    return maxScore
	*/