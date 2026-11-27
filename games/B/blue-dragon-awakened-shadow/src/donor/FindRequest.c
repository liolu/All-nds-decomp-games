/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FindRequest from https://github.com/Project-Holon/aletheia src/game/ov009/gstats.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern int ArrayLength(struct DArrayImplementation *array);
extern void *ArrayNth(struct DArrayImplementation *array, int n);
typedef struct StatsGame {
    int pad0[3];
    void *serverData;
    int pad10[3];
    void *playerIndexes;
    void *teamIndexes;
} StatsGame;
typedef struct StatsConn {
    int pad0[2];
    int inLen;
    StatsGame *game;
    int pad10;
    void *requests;
    int inSize;
    int pad1C;
    int bufIndex;
    int pad24;
    char *inBuff;
    int state;
} StatsConn;
extern int FindRequest(int reqtype, int localid, int profileid);
extern struct StatsConn serverreqs;
int FindRequest(int reqtype, int localid, int profileid) {
    int *req;
    int i;

    if (serverreqs.requests == 0) {
        return -1;
    }
    for (i = 0; i < ArrayLength(serverreqs.requests); i++) {
        req = ArrayNth(serverreqs.requests, i);
        if (req[0] == reqtype && req[1] == localid && req[2] == profileid) {
            return i;
        }
    }
    return -1;
}
