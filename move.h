#ifndef MOVE_H
#define MOVE_H

#include <string.h>
#include "position.h"

#define MAX_MOVES 2048

struct move {
	int from;
	int to;
	int prom;
	int piece;
	int cappiece;
};

static inline char* movetostr(struct move move) {
	assert(move.to >= 0 && move.to <= 63);
	assert(move.from >= 0 && move.from <= 63);
	
	char piecechars[6] = { 'p', 'n', 'b', 'r', 'q', 'k' };
	int promchar = piecechars[move.prom];
	if (move.prom == -1) promchar = 0;
	char returnstring[6];
	char startsquarefile = (char)(getfile(move.from) + 97);
	char startsquarerank = (char)(getrank(move.from) + 49);
	char endsquarefile = (char)(getfile(move.to) + 97);
	char endsquarerank = (char)(getrank(move.to) + 49);
	returnstring[0] = startsquarefile;
	returnstring[1] = startsquarerank;
	returnstring[2] = endsquarefile;
	returnstring[3] = endsquarerank;
	returnstring[4] = promchar;
	returnstring[5] = 0;
	return strdup(returnstring);
}

#endif