#ifndef SEARCH_H
#define SEARCH_H

#include <time.h>
#include "position.h"
#include "move.h"

int alphaBeta(struct position *pos, int alpha, int beta, int depthleft, int nullmove, clock_t endtime);
struct move search(struct position pos, int searchdepth,int movetime);
int reduction(const struct move *move, const int depthleft, char cappiece, int legalmoves);
int qSearch(struct position *pos, int alpha, int beta, clock_t endtime);

#endif