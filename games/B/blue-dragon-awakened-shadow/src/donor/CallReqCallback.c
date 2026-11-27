/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CallReqCallback from https://github.com/Project-Holon/aletheia src/game/ov009/gstats.c (license: none (MIT = tooling only)),
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
extern void ArrayDeleteAt(struct DArrayImplementation *array, int n);
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
typedef struct {
    int type;
    int localid;
    int profileid;
    int extra0;
    int extra1;
    void *userdata;
    union {
        void (*getPlayer)(int, int, int, char *, void *);
        void (*getRecord)(int, int, int, int, int, long, char *, int, void *);
        void (*setRecord)(int, int, int, int, int, long, void *);
        void (*result)(int, int, int, void *);
    } callback;
} serverreq_t;
extern void CallReqCallback(int reqindex, int success, long modified, char *data, int length);
extern struct StatsConn serverreqs;
void CallReqCallback(int reqindex, int success, long modified, char *data, int length) {
    serverreq_t *req;

    if (reqindex < 0 || reqindex >= ArrayLength(serverreqs.requests)) {
        return;
    }
    req = (serverreq_t *) ArrayNth(serverreqs.requests, reqindex);
    if (req->callback.getPlayer != 0) {
        switch (req->type) {
            case 0:
                req->callback.getPlayer(req->localid, req->profileid, success, data, req->userdata);
                break;
            case 1:
                req->callback.getRecord(req->localid, req->profileid, req->extra0, req->extra1, success, modified, data,
                                        length, req->userdata);
                break;
            case 2:
                req->callback.setRecord(req->localid, req->profileid, req->extra0, req->extra1, success, modified,
                                        req->userdata);
                break;
            case 3:
                req->callback.result(req->localid, req->profileid, success, req->userdata);
                break;
        }
    }
    ArrayDeleteAt(serverreqs.requests, reqindex);
}
