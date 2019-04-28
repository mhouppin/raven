#ifndef TT_H
#define TT_H
#include "move.h"
#include "hash.h"

#define EXACT 1
#define LOWERBOUND 2
#define UPPERBOUND 3

struct TTentry {
	U64 hash;
	int depth;
	int flag;
	struct move bestmove;
	int score;
};

struct PTTentry {
	U64 hash;
	int depth;
	U64 nodes;
};

struct ETTentry {
	U64 hash;
	int eval;
};

struct PTTtable {
	struct PTTentry *entries;
	int totentries;
};

struct TTtable {
	struct TTentry *entries;
	int totentries;
};

struct ETTtable {
	struct ETTentry *entries;
	int totentries;
};

void initETT(struct ETTtable *table);
void initPTT(struct PTTtable *table);
void initTT(struct TTtable *table);

void addETTentry(struct ETTtable *table,U64 hash, int eval);
void addTTentry(struct TTtable *table,U64 hash, int depth,int flag, struct move bestmove, int score);
void addPTTentry(struct PTTtable *table,U64 hash, int depth,U64 nodes);

void clearTT(struct TTtable *table);

struct PTTentry getPTTentry(struct PTTtable *table,U64 hash);
struct ETTentry getETTentry(struct ETTtable *table,U64 hash);
struct TTentry getTTentry(struct TTtable *table,U64 hash);


#endif
