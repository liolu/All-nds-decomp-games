/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ParseServerIPPort from https://github.com/Project-Holon/aletheia src/game/ov009/sb_serverlist.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef struct SBServer {
    unsigned int publicip;
    unsigned short publicport;
    unsigned int privateip;
    unsigned short privateport;
    unsigned int icmpip;
    unsigned char state;
    unsigned char flags;
    struct HashImplementation *keyvals;
    unsigned int updatetime;
    unsigned int querychallenge;
    struct SBServer *next;
    unsigned char splitResponseBitmap;
} SBServer;
typedef void (*SBListCB)(struct SBServerList *, int, SBServer *, void *);
typedef void (*SBMaploopCB)(struct SBServerList *slist, void *server, long changeTime, int count, char **mapList,
                            void *instance);
typedef void (*SBPlayerSearchCB)(struct SBServerList *, char *, unsigned int, unsigned short, long, char *, void *);
typedef struct SBSortInfo {
    char sortkey[256];
    int comparemode;
} SBSortInfo;
typedef struct SBServerList {
    int state;
    void *servers;
    void *keylist;
    char queryforgamename[36];
    char queryfromgamename[36];
    char queryfromkey[32];
    char mychallenge[8];
    unsigned char *inbuffer;
    int inbufferlen;
    char *popularvalues[255];
    int numpopularvalues;
    int expectedelements;
    SBListCB ListCallback;
    SBMaploopCB MaploopCallback;
    SBPlayerSearchCB PlayerSearchCallback;
    void *instance;
    SBSortInfo currsortinfo;
    SBSortInfo prevsortinfo;
    int sortascending;
    unsigned int mypublicip;
    unsigned int srcip;
    unsigned short defaultport;
    char *lasterror;
    int slsocket;
    unsigned int lanstarttime;
    int fromgamever;
    char cryptkey[0x108];
    int queryoptions;
    int pstate;
    unsigned short backendgameflags;
    char *mLanAdapterOverride;
    SBServer *deadlist;
} SBServerList;
extern void ParseServerIPPort(SBServerList *slist, unsigned char *buf, int len, unsigned int *ip, unsigned short *port);
typedef struct {
    unsigned char b[4];
} B4;
typedef struct {
    unsigned char b[2];
} B2;
extern void ParseServerIPPort(SBServerList *slist, unsigned char *buf, int len, unsigned int *ip, unsigned short *port);
void ParseServerIPPort(SBServerList *slist, unsigned char *buf, int len, unsigned int *ip, unsigned short *port) {
    unsigned char flags;
    if (len < 5) {
        return;
    }
    flags      = *buf++;
    *(B4 *) ip = *(B4 *) buf;
    buf += 4;
    len -= 5;
    if (flags & 0x10) {
        if (len < 2) {
            return;
        }
        *(B2 *) port = *(B2 *) buf;
    } else {
        *port = slist->defaultport;
    }
}
