/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ProcessIncomingReplies from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_queryengine.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
typedef struct SOSockAddr {
    int len;
} SOSockAddr;
typedef unsigned char gsi_u8;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef int SOCKET;
typedef struct SOSockAddr SOCKADDR;
extern int recvfrom(SOCKET sock, char *buf, int len, int flags, SOCKADDR *addr, int *fromlen);
extern int CanReceiveOnSocket(SOCKET sock);
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
void ParseSingleQR2Reply(SBQueryEngine *engine, SBServer server, char *data, int len);
void ParseSingleGOAReply(SBQueryEngine *engine, SBServer server, char *data, int len);
SBBool ParseSingleICMPReply(SBQueryEngine *engine, SBServer server, char *data, int len);
void ProcessIncomingReplies(SBQueryEngine *engine, SBBool icmpSocket) {
    int i;
    char indata[2048];
    struct SOSockAddrIn saddr;
    int saddrlen = sizeof(saddr);
    SBServer server;
    SOCKET recvSock = 0;

    if (icmpSocket) {
#line 602
    } else {
        recvSock = engine->querysock;
    }

    while (CanReceiveOnSocket(recvSock)) {
        i = (int) recvfrom(recvSock, indata, sizeof(indata) - 1, 0, (struct SOSockAddr *) &saddr, &saddrlen);

        if (((i) == -1)) {
            break;
        }
        indata[i] = 0;

        for (server = engine->querylist.first; server != 0; server = server->next) {
            if ((icmpSocket && (server->flags & 8) && server->icmpip == saddr.addr.addr) ||
                (server->publicip == saddr.addr.addr && (server->publicport == saddr.port || icmpSocket)) ||
                (server->publicip == engine->mypublicip && (server->flags & 2) && server->privateip == saddr.addr.addr &&
                 server->privateport == saddr.port)) {
                if (icmpSocket) {
                    if (ParseSingleICMPReply(engine, server, indata, i)) {
                        break;
                    }
                } else {
                    if (engine->queryversion == 1) {
                        ParseSingleQR2Reply(engine, server, indata, i);
                    } else {
                        ParseSingleGOAReply(engine, server, indata, i);
                    }
                    break;
                }
            }
        }
    }
}
