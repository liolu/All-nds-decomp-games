/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a5f44 from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_queryengine.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char gsi_u8;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
typedef struct _SBServer *SBServer;
typedef enum {
    SBFalse,
    SBTrue
} SBBool;
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
extern void func_020a5f44(SBQueryEngine *engine, SBServer server, int addfront, int querytype, SBBool usequerychallenge);
void func_020a5aa8(SBServerFIFO *fifo, SBServer server);
void func_020a5adc(SBServerFIFO *fifo, SBServer server);
void func_020a5bb8(SBQueryEngine *engine, SBServer server);
void func_020a5f44(SBQueryEngine *engine, SBServer server, int addfront, int querytype, SBBool usequerychallenge) {

    ;
    ;

    server->state &= (unsigned char) ~((1 << 2) | (1 << 3) | (1 << 5) | (1 << 7) | (1 << 4));
    server->splitResponseBitmap = 0;
    server->querychallenge      = 0;

    if (querytype == 2) {
        return;
    }

    if (querytype == 0) {
        server->state |= (1 << 2);
    } else if (querytype == 1) {
        server->state |= (1 << 3);
    } else if (querytype == 2) {
        server->state |= (1 << 5);
    } else {
        return;
    }

    if (usequerychallenge && (querytype == 1 || querytype == 0)) {
        server->state |= (1 << 7);
    }

    if (engine->querylist.count < engine->maxupdates) {
        func_020a5bb8(engine, server);
        return;
    }

    if (addfront) {
        func_020a5adc(&engine->pendinglist, server);
    } else {
        func_020a5aa8(&engine->pendinglist, server);
    }
}
