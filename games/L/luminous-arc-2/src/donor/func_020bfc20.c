/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ProcessConnectPacket from projets/blue-dragon-awakened-shadow/src/donor/ProcessConnectPacket.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
inline u32 SOC_NtoHs(u16 val) {
    return ((val >> 0x08) & 0x000000FF) | ((val << 0x08) & 0x0000FF00);
}
typedef int SOCKET;
extern int socket(int pf, int type, int protocol);
typedef enum {
    no_nat,
    firewall_only,
    full_cone,
    restricted_cone,
    port_restricted_cone,
    symmetric,
    unknown,
    NUM_NAT_TYPES
} NatType;
typedef enum {
    unrecognized,
    private_as_public,
    consistent_port,
    incremental,
    mixed,
    NUM_MAPPING_SCHEMES
} NatMappingScheme;
typedef enum {
    ns_initsent,
    ns_initack,
    ns_connectping,
    ns_finished,
    ns_canceled,
    ns_reportsent,
    ns_reportack
} NegotiateState;
typedef enum {
    nr_success,
    nr_deadbeatpartner,
    nr_inittimeout,
    nr_pingtimeout,
    nr_unknownerror,
    nr_noresult
} NegotiateResult;
typedef void (*NegotiateProgressFunc)(NegotiateState state, void *userdata);
typedef void (*NegotiateCompletedFunc)(NegotiateResult result, SOCKET gamesocket, struct SOSockAddrIn *remoteaddr,
                                       void *userdata);
typedef struct _InitPacket {
    unsigned char porttype;
    unsigned char clientindex;
    unsigned char usegameport;
    unsigned int localip;
    unsigned short localport;
} InitPacket;
typedef struct _ReportPacket {
    unsigned char porttype;
    unsigned char clientindex;
    unsigned char negResult;
    NatType natType;
    NatMappingScheme natMappingScheme;
    char gamename[50];
} ReportPacket;
typedef struct _ConnectPacket {
    unsigned int remoteIP;
    unsigned short remotePort;
    unsigned char gotyourdata;
    unsigned char finished;
} ConnectPacket;
typedef struct _NatNegPacket {

    unsigned char magic[6];
    unsigned char version;
    unsigned char packettype;
    int cookie;

    union {
        InitPacket Init;
        ConnectPacket Connect;
        ReportPacket Report;
    } Packet;

} NatNegPacket;
struct _NATNegotiator {
    SOCKET negotiateSock;
    SOCKET gameSock;
    int cookie;
    int clientindex;
    NegotiateState state;
    int initAckRecv[4];
    int retryCount;
    int maxRetryCount;
    unsigned long retryTime;
    unsigned int guessedIP;
    unsigned short guessedPort;
    unsigned char gotRemoteData;
    unsigned char sendGotRemoteData;
    NegotiateProgressFunc progressCallback;
    NegotiateCompletedFunc completedCallback;
    void *userdata;
    NegotiateResult result;
    SOCKET connectedSocket;
    struct SOSockAddrIn remoteaddr;
};
typedef struct _NATNegotiator *NATNegotiator;
extern NatType natType;
extern NatMappingScheme natMappingScheme;
extern void func_020bf0a8(NATNegotiator neg, NegotiateResult result, SOCKET socket, struct SOSockAddrIn *remoteaddr);
extern void func_020bf3c8(NATNegotiator neg);
extern void func_020bfb54(NATNegotiator neg, struct SOSockAddrIn *toaddr);
void func_020bfc20(NATNegotiator neg, NatNegPacket *p, struct SOSockAddrIn *fromaddr) {

    ;

    if (p->Packet.Connect.finished == 0) {
        func_020bfb54(neg, fromaddr);
    }

    if (neg->state >= ns_connectping) {
        return;
    }

    if (p->Packet.Connect.finished != 0) {
        NegotiateResult errcode;
        errcode = nr_unknownerror;
        if (p->Packet.Connect.finished == 1) {
            errcode = nr_deadbeatpartner;
        } else if (p->Packet.Connect.finished == 2) {
            errcode = nr_inittimeout;
        }
        func_020bf0a8(neg, errcode, (-1), 0);
        return;
    }

    neg->guessedIP   = p->Packet.Connect.remoteIP;
    neg->guessedPort = SOC_NtoHs(p->Packet.Connect.remotePort);
    neg->retryCount  = 0;

    neg->state = ns_connectping;
    neg->progressCallback(neg->state, neg->userdata);

    func_020bf3c8(neg);
}
