/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiSendBufferToPeer from https://github.com/Project-Holon/aletheia src/game/ov009/gpibuffer.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long size_t;
typedef void (*GPCallback)(void **connection, void *arg, void *param);
typedef struct GPICallback {
    GPCallback callback;
    void *param;
} GPICallback;
typedef struct GPIBuffer {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
typedef struct GPIPeerOp {
    int state;
    void *userData;
    GPCallback callback;
    struct GPIPeerOp *next;
    int type;
    unsigned int timeout;
} GPIPeerOp;
typedef struct GPIPeer {
    int state;
    int initiated;
    unsigned int ip;
    unsigned short port;
    int profile;
    int timeout;
    int nackCount;
    GPIBuffer inputBuffer;
    GPIBuffer outputBuffer;
    void *messages;
    GPIPeerOp *queueHead;
    GPIPeerOp *firstOp;
    GPIPeerOp *lastOp;
    struct GPIPeer *pnext;
} GPIPeer;
typedef struct GPIOperation {
    int type;
    struct GPISearchData *data;
    int blocking;
    GPICallback callback;
    int state;
    int id;
    int result;
    struct GPIOperation *pnext;
} GPIOperation;
typedef struct GPISearchData {
    int type;
    int sock;
    GPIBuffer inputBuffer;
    GPIBuffer outputBuffer;
    char nick[31];
    char uniquenick[21];
    int namespaceIDs[16];
    int numNamespaces;
    char email[51];
    char firstname[31];
    char lastname[31];
    char password[31];
    char cdkey[65];
    int partnerID;
    int icquin;
    int skip;
    int productID;
    int processing;
    int remove;
    u32 searchStartTime;
    int *revBuddyProfileIds;
    int numOfRevBuddyProfiles;
    int profile;
    int maxResults;
} GPISearchData;
typedef struct GPIProfileList {
    void *profileTable;
    int num;
    int numBuddies;
    int numBlocked;
} GPIProfileList;
typedef struct GPICallbackData {
    GPICallback callback;
    void *arg;
    int type;
    int operationID;
    struct GPICallbackData *pnext;
} GPICallbackData;
typedef struct GPIConnection {
    char errorString[256];
    int infoCaching;
    int infoCachingBuddyAndBlockOnly;
    int simulation;
    int firewall;
    char nick[31];
    char uniquenick[21];
    char email[51];
    char password[31];
    int sessKey;
    int userid;
    int profileid;
    int partnerID;
    GPICallback callbacks[9];
    int cmSocket;
    int connectState;
    GPIBuffer socketBuffer;
    char *inputBuffer;
    int inputBufferSize;
    GPIBuffer outputBuffer;
    char mHeader[16];
    unsigned short peerPort;
    int nextOperationID;
    int numSearches;
    int lastStatusState;
    unsigned int hostIp;
    unsigned int hostPrivateIp;
    unsigned short queryPort;
    unsigned short hostPort;
    unsigned int sessionFlags;
    char richStatus[256];
    char gameType[33];
    char gameVariant[33];
    char gameMapName[33];
    void *extendedInfoKeys;
    char lastStatusString[256];
    char lastLocationString[256];
    int errorCode;
    int fatalError;
    void *diskCache;
    GPIOperation *operationList;
    GPIProfileList profileList;
    GPIPeer *peerList;
    GPICallbackData *callbackList;
    GPICallbackData *lastCallback;
    GPIBuffer updateproBuffer;
    GPIBuffer updateuiBuffer;
    void *transfers;
    unsigned int nextTransferID;
    int productID;
    int namespaceID;
    char loginTicket[25];
    int quietModeFlags;
    unsigned int kaTransmit;
} GPIConnection;
extern int gpiSendBufferToPeer(GPIConnection **connection, unsigned int ip, unsigned short port, GPIBuffer *outputBuffer,
                               int *closed, int clipSentData);
extern void *memmove(void *dest, const void *src, size_t n);
extern int gsUdpEngineGetPeerOutBufferFreeSpace(u32 theIp, u16 thePort);
extern int func_0205db1c(u32 theIp, u16 thePort, char *theHeader, unsigned char *theMsg, u32 theMsgLen, int theReliable);
extern int gsUdpEngineGetPeerState(unsigned int ip, unsigned short port, int *state);
extern int gpiSendBufferToPeer(GPIConnection **connection, unsigned int ip, unsigned short port, GPIBuffer *outputBuffer,
                               int *closed, int clipSentData);
int gpiSendBufferToPeer(GPIConnection **connection, unsigned int ip, unsigned short port, GPIBuffer *outputBuffer, int *closed,
                        int clipSentData) {
    GPIConnection *iconnection;
    unsigned int remaining;
    unsigned char *buffer;
    unsigned int pos;
    unsigned int len;
    unsigned int total;
    int aPeerState;
    unsigned int freeSpace;
    unsigned int sendAmount;

    len         = outputBuffer->len;
    iconnection = *connection;
    pos         = outputBuffer->pos;
    buffer      = (unsigned char *) outputBuffer->buffer;
    remaining   = len - pos;
    total       = 0;
    if (remaining == 0) {
        return 0;
    }

    freeSpace = gsUdpEngineGetPeerOutBufferFreeSpace(ip, port) - 23;
    if ((int) remaining <= (int) freeSpace) {
        func_0205db1c(ip, port, iconnection->mHeader, buffer + pos, remaining, 1);
        total     = remaining;
        remaining = 0;
    } else {
        do {
            sendAmount = gsUdpEngineGetPeerOutBufferFreeSpace(ip, port) - 23;
            if (sendAmount <= 23) {
                break;
            }
            if (func_0205db1c(ip, port, iconnection->mHeader, &buffer[pos + total], sendAmount, 1) == 8) {
                break;
            }
            total += sendAmount;
            remaining -= sendAmount;
        } while (remaining != 0);
    }

    if (clipSentData) {
        if (total != 0) {
            memmove(buffer, buffer + total, remaining + 1);
            len -= total;
        }
    } else {
        pos += total;
    }
    outputBuffer->len = len;
    outputBuffer->pos = pos;
    gsUdpEngineGetPeerState(ip, port, &aPeerState);
    if (aPeerState == 3) {
        *closed = 1;
    } else {
        *closed = 0;
    }
    return 0;
}
