#include "globals.h"
#include "TT.h"
#include "hash.h"

int hashsize = 32;
struct position posstack[1024];
int posstackend = 0;
U64 nodesSearched = 0;
struct TTtable TT;
U64 currenthash;
U64 hashstack[100];