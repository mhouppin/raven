#ifndef DRAW_H
#define DRAW_H

#include <assert.h>
#include "globals.h"
#include "position.h"
#include "hash.h"

static inline int isThreefold(struct position *pos) {
	assert(pos);
	assert(pos->halfmoves >= 0);
	U64 curposhash = generateHash(pos);
	currenthash = curposhash;
	if (pos->halfmoves <= 4) return 0;
	int numrepeats = 0;
	for (int i = (posstackend - 1);(i > (posstackend - 1 - pos->halfmoves - 1)) && i >= 0;i-=2) {
	//for (int i = (hashstackend - 1);(i > (hashstackend - 1 - pos->halfmoves - 1)) && i >= 0;i-=2) {
		U64 checkhash = hashstack[i];
		if (checkhash == 0) {
			struct position checkpos = posstack[i];
			checkhash = generateHash(&checkpos);
			hashstack[i] = checkhash;
		}
		if (checkhash == curposhash) {
			numrepeats++;
			if (numrepeats >= 3) {
				return 1;
			}
		}
	}
	return 0;
}

#endif
