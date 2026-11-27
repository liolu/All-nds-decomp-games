/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* QueueNextQueries from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_queryengine.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char gsi_u8;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
typedef struct _SBServer *SBServer;
typedef struct HashImplementation *HashTable;
typedef struct _SBQueryEngine *SBQueryEnginePtr;
typedef enum {
    qe_updatesuccess,
    qe_updatefailed,
    qe_engineidle,
    qe_challengereceived
} SBQueryEngineCallbackReason;
typedef void (*SBEngineCallbackFn)(SBQueryEnginePtr engine, SBQueryEngineCallbackReason reason, SBServer server,
                                   void *instance);
struct _SBServer {
    goa_uint32 publicip;
    unsigned short publicport;
    goa_uint32 privateip;
    unsigned short privateport;
    goa_uint32 icmpip;
    unsigned char state;
    unsigned char flags;
    HashTable keyvals;
    gsi_time updatetime;
    gsi_u32 querychallenge;
    struct _SBServer *next;
    gsi_u8 splitResponseBitmap;
};
typedef struct _SBServerFIFO {
    SBServer first;
    SBServer last;
    int count;
} SBServerFIFO;
typedef struct _SBQueryEngine {
    int queryversion;
    int maxupdates;
    SBServerFIFO querylist;
    SBServerFIFO pendinglist;
    SOCKET querysock;

    SOCKET icmpsock;

    goa_uint32 mypublicip;
    unsigned char serverkeys[20];
    int numserverkeys;
    SBEngineCallbackFn ListCallback;
    void *instance;
} SBQueryEngine;
SBServer FIFOGetFirst(SBServerFIFO *fifo);
void QEStartQuery(SBQueryEngine *engine, SBServer server);
void QueueNextQueries(SBQueryEngine *engine) {
    while (engine->querylist.count < engine->maxupdates && engine->pendinglist.count > 0) {
        SBServer server = FIFOGetFirst(&engine->pendinglist);
        QEStartQuery(engine, server);
    }
}
