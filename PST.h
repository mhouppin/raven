#ifndef PST_H
#define PST_H


static const int PawnPSTMG[64] = {
//A1                                    H1
      0,   0,   0,   0,   0,   0,   0,   0,
     -1,  -7, -11, -35, -13,   5,   3,  -5,
      1,  1,   -6, -19,  -6,  -7,  -4,  10,
      1,  14,   8,   4,   5,   4,  10,   7,
      9,  30,  23,  31,  31,  23,  17,  11,
     21,  54,  72,  56,  77,  95,  71,  11,
    118, 121, 173, 168, 107,  82, -16,  22,
      0,   0,   0,   0,   0,   0,   0,   0
//A8                                    H8
};

static const int PawnPSTEG[64] = {
      0,   0,   0,   0,   0,   0,   0,   0,
    -17, -17, -17, -17, -17, -17, -17, -17,
    -11, -11, -11, -11, -11, -11, -11, -11,
     -7,  -7,  -7,  -7,  -7,  -7,  -7,  -7,
     16,  16,  16,  16,  16,  16,  16,  16,
     55,  55,  55,  55,  55,  55,  55,  55,
     82,  82,  82,  82,  82,  82,  82,  82,
      0,   0,   0,   0,   0,   0,   0,   0
};

static const int PawnPSTMG_B[64] = {
//A1                                    H1
0, 0, 0, 0, 0, 0, 0, 0,
118, 121, 173, 168, 107, 82, -16, 22,
21, 54, 72, 56, 77, 95, 71, 11,
9, 30, 23, 31, 31, 23, 17, 11,
1, 14, 8, 4, 5, 4, 10, 7,
1, 1, -6, -19, -6, -7, -4, 10,
-1, -7, -11, -35, -13, 5, 3, -5,
0, 0, 0, 0, 0, 0, 0, 0
//A8                                    H8
};

static const int PawnPSTEG_B[64] = {
0, 0, 0, 0, 0, 0, 0, 0,
     82,  82,  82,  82,  82,  82,  82,  82,
     55,  55,  55,  55,  55,  55,  55,  55,
     16,  16,  16,  16,  16,  16,  16,  16,
     -7,  -7,  -7,  -7,  -7,  -7,  -7,  -7,
    -11, -11, -11, -11, -11, -11, -11, -11,
    -17, -17, -17, -17, -17, -17, -17, -17,
0, 0, 0, 0, 0, 0, 0, 0
};

static const int KnightPSTMG[64] = {
    -99, -30, -66, -64, -29, -19, -61, -81,
    -56, -31, -28,  -1,  -7, -20, -42, -11,
    -38, -16,   0,  14,   8,   3,   3, -42,
    -14,   0,   2,   3,  19,  12,  33,  -7,
    -14,  -4,  25,  33,  10,  33,  14,  43,
    -22,  18,  60,  64, 124, 143,  55,   6,
    -34,  24,  54,  74,  60, 122,   2,  29,
    -60,   0,   0,   0,   0,   0,   0,   0
};

static const int KnightPSTEG[64] = {
    -99, -99, -94, -88, -88, -94, -99, -99,
    -81, -62, -49, -43, -43, -49, -62, -81,
    -46, -27, -15,  -9,  -9, -15, -27, -46,
    -22,  -3,  10,  16,  16,  10,  -3, -22,
     -7,  12,  25,  31,  31,  25,  12,  -7,
     -2,  17,  30,  36,  36,  30,  17,  -2,
     -7,  12,  25,  31,  31,  25,  12,  -7,
    -21,  -3,  10,  16,  16,  10,  -3, -21
};

static const int KnightPSTMG_B[64] = {
-60, 0, 0, 0, 0, 0, 0, 0,
-34, 24, 54, 74, 60, 122, 2, 29,
-22, 18, 60, 64, 124, 143, 55, 6,
-14, -4, 25, 33, 10, 33, 14, 43,
-14, 0, 2, 3, 19, 12, 33, -7,
-38, -16, 0, 14, 8, 3, 3, -42,
-56, -31, -28, -1, -7, -20, -42, -11,
-99, -30, -66, -64, -29, -19, -61, -81
};

static const int KnightPSTEG_B[64] = {
-21, -3, 10, 16, 16, 10, -3, -21,
-7, 12, 25, 31, 31, 25, 12, -7,
-2, 17, 30, 36, 36, 30, 17, -2,
-7, 12, 25, 31, 31, 25, 12, -7,
-22, -3, 10, 16, 16, 10, -3, -22,
-46, -27, -15, -9, -9, -15, -27, -46,
-81, -62, -49, -43, -43, -49, -62, -81,
-99, -99, -94, -88, -88, -94, -99, -99
};

static const int BishopPSTMG[64] = {
     -7,  12,  -8, -37, -31,  -8, -45, -67,
     15,   5,  13, -10,   1,   2,   0,  15,
      5,  12,  14,  13,  10,  -1,   3,   4,
      1,   5,  23,  32,  21,   8,  17,   4,
     -1,  16,  29,  27,  37,  27,  17,   4,
      7,  27,  20,  56,  91, 108,  53,  44,
    -24, -23,  30,  58,  65,  61,  69,  11,
      0,   0,   0,   0,   0,   0,   0,   0
};

static const int BishopPSTEG[64] = {
    -27, -21, -17, -15, -15, -17, -21, -27,
    -10,  -4,   0,   2,   2,   0,  -4, -10,
      2,   8,  12,  14,  14,  12,   8,   2,
     11,  17,  21,  23,  23,  21,  17,  11,
     14,  20,  24,  26,  26,  24,  20,  14,
     13,  19,  23,  25,  25,  23,  19,  13,
      8,  14,  18,  20,  20,  18,  14,   8,
     -2,   4,   8,  10,  10,   8,   4,  -2
};

static const int BishopPSTMG_B[64] = {
0, 0, 0, 0, 0, 0, 0, 0,
-24, -23, 30, 58, 65, 61, 69, 11,
7, 27, 20, 56, 91, 108, 53, 44,
-1, 16, 29, 27, 37, 27, 17, 4,
1, 5, 23, 32, 21, 8, 17, 4,
5, 12, 14, 13, 10, -1, 3, 4,
15, 5, 13, -10, 1, 2, 0, 15,
-7, 12, -8, -37, -31, -8, -45, -67
};

static const int BishopPSTEG_B[64] = {
-2, 4, 8, 10, 10, 8, 4, -2,
8, 14, 18, 20, 20, 18, 14, 8,
13, 19, 23, 25, 25, 23, 19, 13,
14, 20, 24, 26, 26, 24, 20, 14,
11, 17, 21, 23, 23, 21, 17, 11,
2, 8, 12, 14, 14, 12, 8, 2,
-10, -4, 0, 2, 2, 0, -4, -10,
-27, -21, -17, -15, -15, -17, -21, -27
};

static const int RookPSTMG[64] = {
     -2,  -1,   3,   1,   2,   1,   4,  -8,
    -26,  -6,   2,  -2,   2, -10,  -1, -29,
    -16,   0,   3,  -3,   8,  -1,  12,   3,
     -9,  -5,   8,  14,  18, -17,  13, -13,
     19,  33,  46,  57,  53,  39,  53,  16,
     24,  83,  54,  75, 134, 144,  85,  75,
     46,  33,  64,  62,  91,  89,  70, 104,
     84,   0,   0,  37, 124,   0,   0, 153
};

static const int RookPSTEG[64] = {
    -32, -31, -30, -29, -29, -30, -31, -32,
    -27, -25, -24, -24, -24, -24, -25, -27,
    -15, -13, -12, -12, -12, -12, -13, -15,
      1,   2,   3,   4,   4,   3,   2,   1,
     15,  17,  18,  18,  18,  18,  17,  15,
     25,  27,  28,  28,  28,  28,  27,  25,
     27,  28,  29,  30,  30,  29,  28,  27,
     16,  17,  18,  19,  19,  18,  17,  16
};

static const int RookPSTMG_B[64] = {
84, 0, 0, 37, 124, 0, 0, 153,
46, 33, 64, 62, 91, 89, 70, 104,
24, 83, 54, 75, 134, 144, 85, 75,
19, 33, 46, 57, 53, 39, 53, 16,
-9, -5, 8, 14, 18, -17, 13, -13,
-16, 0, 3, -3, 8, -1, 12, 3,
-26, -6, 2, -2, 2, -10, -1, -29,
-2, -1, 3, 1, 2, 1, 4, -8

};

static const int RookPSTEG_B[64] = {
16, 17, 18, 19, 19, 18, 17, 16,
27, 28, 29, 30, 30, 29, 28, 27,
25, 27, 28, 28, 28, 28, 27, 25,
15, 17, 18, 18, 18, 18, 17, 15,
1, 2, 3, 4, 4, 3, 2, 1,
-15, -13, -12, -12, -12, -12, -13, -15,
-27, -25, -24, -24, -24, -24, -25, -27,
-32, -31, -30, -29, -29, -30, -31, -32
};

static const int QueenPSTMG[64] = {
      1, -10, -11,   3, -15, -51, -83, -13,
     -7,   3,   2,   5,  -1, -10,  -7,  -2,
    -11,   0,  12,   2,   8,  11,   7,  -6,
     -9,   5,   7,   9,  18,  17,  26,   4,
     -6,   0,  15,  25,  32,   9,  26,  12,
    -16,  10,  13,  25,  37,  30,  15,  26,
      1,  11,  35,   0,  16,  55,  39,  57,
    -13,   6, -42,   0,  29,   0,   0, 102
};

static const int QueenPSTEG[64] = {
    -61, -55, -52, -50, -50, -52, -55, -61,
    -31, -26, -22, -21, -21, -22, -26, -31,
     -8,  -3,   1,   3,   3,   1,  -3,  -8,
      9,  14,  17,  19,  19,  17,  14,   9,
     19,  24,  28,  30,  30,  28,  24,  19,
     23,  28,  32,  34,  34,  32,  28,  23,
     21,  26,  30,  31,  31,  30,  26,  21,
     12,  17,  21,  23,  23,  21,  17,  12
};

static const int QueenPSTMG_B[64] = {
 -13, 6, -42, 0, 29, 0, 0, 102,
1, 11, 35, 0, 16, 55, 39, 57,
-16, 10, 13, 25, 37, 30, 15, 26,
-6, 0, 15, 25, 32, 9, 26, 12,
-9, 5, 7, 9, 18, 17, 26, 4,
-11, 0, 12, 2, 8, 11, 7, -6,
-7, 3, 2, 5, -1, -10, -7, -2,
1, -10, -11, 3, -15, -51, -83, -13

};

static const int QueenPSTEG_B[64] = {
12, 17, 21, 23, 23, 21, 17, 12,
21, 26, 30, 31, 31, 30, 26, 21,
23, 28, 32, 34, 34, 32, 28, 23,
19, 24, 28, 30, 30, 28, 24, 19,
9, 14, 17, 19, 19, 17, 14, 9,
-8, -3, 1, 3, 3, 1, -3, -8,
-31, -26, -22, -21, -21, -22, -26, -31,
-61, -55, -52, -50, -50, -52, -55, -61
};

static const int KingPSTMG[64] = {
      0,   0,   0,  -9,   0,  -9,  25,   0,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9,
     -9,  -9,  -9,  -9,  -9,  -9,  -9,  -9
};

static const int KingPSTEG[64] = {
    -34, -30, -28, -27, -27, -28, -30, -34,
    -17, -13, -11, -10, -10, -11, -13, -17,
     -2,   2,   4,   5,   5,   4,   2,  -2,
     11,  15,  17,  18,  18,  17,  15,  11,
     22,  26,  28,  29,  29,  28,  26,  22,
     31,  34,  37,  38,  38,  37,  34,  31,
     38,  41,  44,  45,  45,  44,  41,  38,
     42,  46,  48,  50,  50,  48,  46,  42
};

static const int KingPSTMG_B[64] = {
-9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9,
0, 0, 0, -9, 0, -9, 25, 0
};

static const int KingPSTEG_B[64] = {
42, 46, 48, 50, 50, 48, 46, 42,
38, 41, 44, 45, 45, 44, 41, 38,
31, 34, 37, 38, 38, 37, 34, 31,
22, 26, 28, 29, 29, 28, 26, 22,
11, 15, 17, 18, 18, 17, 15, 11,
-2, 2, 4, 5, 5, 4, 2, -2,
-17, -13, -11, -10, -10, -11, -13, -17,
-34, -30, -28, -27, -27, -28, -30, -34

};

static inline int PSTval(int colour, const char piece, const int square, const char gamestage) {
	assert(piece);
	assert(square >= 0 && square <= 63);
	int score = 0;
	if (gamestage == 'E') {
		/*
		if (piece == 'K') return KingPSTEG[square];
		if (piece == 'k') return -KingPSTEG_B[square];
		if (piece == 'Q') return QueenPSTEG[square];
		if (piece == 'q') return -QueenPSTEG_B[square];
		if (piece == 'P') return PawnPSTEG[square];
		if (piece == 'p') return -PawnPSTEG_B[square];
		if (piece == 'N') return KnightPSTEG[square];
		if (piece == 'n') return -KnightPSTEG_B[square];
		if (piece == 'B') return BishopPSTEG[square];
		if (piece == 'b') return -BishopPSTEG_B[square];
		if (piece == 'R') return RookPSTEG[square];
		if (piece == 'r') return -RookPSTEG_B[square];
		*/
		if (colour == WHITE) {
			switch (piece) {
				case PAWN: score = PawnPSTEG[square]; break;
				case KNIGHT: score = KnightPSTEG[square]; break;
				case BISHOP: score = BishopPSTEG[square]; break;
				case ROOK: score = RookPSTEG[square]; break;
				case QUEEN: score = QueenPSTEG[square]; break;
				case KING: score = KingPSTEG[square]; break;
			}
		}
		else if (colour == BLACK) {
			switch (piece) {
				case PAWN: score = -PawnPSTEG_B[square]; break;
				case KNIGHT: score = -KnightPSTEG_B[square]; break;
				case BISHOP: score = -BishopPSTEG_B[square]; break;
				case ROOK: score = -RookPSTEG_B[square]; break;
				case QUEEN: score = -QueenPSTEG_B[square]; break;
				case KING: score = -KingPSTEG_B[square]; break;
			}
		}
	}
	else {
		/*
		if (piece == 'K') return KingPSTMG[square];
		if (piece == 'k') return -KingPSTMG_B[square];
		if (piece == 'Q') return QueenPSTMG[square];
		if (piece == 'q') return -QueenPSTMG_B[square];
		if (piece == 'P') return PawnPSTMG[square];
		if (piece == 'p') return -PawnPSTMG_B[square];
		if (piece == 'N') return KnightPSTMG[square];
		if (piece == 'n') return -KnightPSTMG_B[square];
		if (piece == 'B') return BishopPSTMG[square];
		if (piece == 'b') return -BishopPSTMG_B[square];
		if (piece == 'R') return RookPSTMG[square];
		if (piece == 'r') return -RookPSTMG_B[square];
		*/
		if (colour == WHITE) {
		switch (piece) {
				case PAWN: score = PawnPSTMG[square]; break;
				case KNIGHT: score = KnightPSTMG[square]; break;
				case BISHOP: score = BishopPSTMG[square]; break;
				case ROOK: score = RookPSTMG[square]; break;
				case QUEEN: score = QueenPSTMG[square]; break;
				case KING: score = KingPSTMG[square]; break;
			}
		}
		else if (colour == BLACK) {
			switch (piece) {
				case PAWN: score = -PawnPSTMG_B[square]; break;
				case KNIGHT: score = -KnightPSTMG_B[square]; break;
				case BISHOP: score = -BishopPSTMG_B[square]; break;
				case ROOK: score = -RookPSTMG_B[square]; break;
				case QUEEN: score = -QueenPSTMG_B[square]; break;
				case KING: score = -KingPSTMG_B[square]; break;
			}
		}
	}
	return score;
}

#endif
