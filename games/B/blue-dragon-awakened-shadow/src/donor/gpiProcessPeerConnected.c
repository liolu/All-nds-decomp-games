/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiProcessPeerConnected from https://github.com/Project-Holon/aletheia src/game/ov009/gpipeer.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
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
typedef struct GPRecvBuddyMessageArg {
    int profile;
    unsigned int date;
    char *message;
} GPRecvBuddyMessageArg;
typedef struct GPRecvBuddyUTMArg {
    int profile;
    unsigned int date;
    char *message;
} GPRecvBuddyUTMArg;
extern int gpiSendBufferToPeer(GPIConnection **connection, unsigned int ip, unsigned short port, GPIBuffer *outputBuffer,
                               int *closed, int clipSentData);
extern int gpiReadMessageFromBuffer(void **connection, GPIBuffer *inputBuffer, char **message, int *type, int *plen);
extern int gpiClipBufferToPosition(void **unused, GPIBuffer *buffer);
extern int gsUdpEngineGetPeerState(unsigned int ip, unsigned short port, int *state);
extern void gpiSetErrorString(void **connection, char *errorString);
extern void *gsimalloc(unsigned long size);
extern int gpiSendBufferToPeer(struct GPIConnection **connection, unsigned int ip, unsigned short port,
                               struct GPIBuffer *outputBuffer, int *closed, int clipSentData);
extern long time(long *timer);
extern char *goastrdup(char *src);
extern int gpiAddCallback(void **connection, GPICallback callback, void *arg, GPIOperation *operation, int type);
extern int gpiSendBuddyMessage(void **connection, int profileid, int type, char *message, int sendOption, GPIPeerOp *peerOp);
extern int func_02060d00(void **connection, GPIPeer *peer);
extern int gpiBuddyHandleKeyReply(void **connection, GPIPeer *peer, char *buffer);
extern void gpiHandleTransferMessage(void **connection, void *peer, int unused, char *headers, char *buffer, int len);
extern int gpiClipBufferToPosition(void **connection, GPIBuffer *buffer);
extern int gpiProcessPeerConnected(void **connection, GPIPeer *peer);
extern int gpiPeerSendMessages(void **connection, GPIPeer *peer);
extern char data_020fb58c[];
extern char data_020fb59c[];
int gpiPeerSendMessages(void **connection, GPIPeer *peer);
int gpiProcessPeerConnected(void **connection, GPIPeer *peer) {
    GPIConnection *iconnection = (GPIConnection *) *connection;
    int aPeerState;
    int connClosed;
    GPICallback callback;
    char *buffer;
    int type;
    int messageLen;
    int result;

    if (!peer) {
        return 3;
    }

    if (peer->outputBuffer.len) {
        result = gpiSendBufferToPeer((struct GPIConnection **) connection, peer->ip, peer->port, &peer->outputBuffer,
                                     &connClosed, 1);
        if (connClosed || result) {
            peer->state = 0x6A;
            return 0;
        }
    }

    if (!peer->outputBuffer.len) {
        {
            int __result__ = gpiPeerSendMessages(connection, peer);
            if (__result__ != 0) {
                return __result__;
            }
        }
        if (peer->state == 0x6A) {
            return 0;
        }
    }

    if (peer->inputBuffer.len > 0) {
        peer->timeout = time(0) + 10000;
    }

    do {
        {
            int __result__ = gpiReadMessageFromBuffer(connection, &peer->inputBuffer, &buffer, &type, &messageLen);
            if (__result__ != 0) {
                return __result__;
            }
        }

        if (buffer) {
            switch (type) {
                case 1:
                    callback = iconnection->callbacks[3];
                    if (callback.callback) {
                        GPRecvBuddyMessageArg *arg;
                        arg = (GPRecvBuddyMessageArg *) gsimalloc(sizeof(GPRecvBuddyMessageArg));
                        if (arg == 0) {
                            gpiSetErrorString(connection, data_020fb58c);
                            return 1;
                        }
                        arg->profile = peer->profile;
                        arg->message = goastrdup(buffer);
                        arg->date    = time(0);
                        {
                            int __result__ = gpiAddCallback(connection, callback, arg, 0, 2);
                            if (__result__ != 0) {
                                return __result__;
                            }
                        }
                    }
                    break;

                case 5:
                    callback = iconnection->callbacks[4];
                    if (callback.callback) {
                        GPRecvBuddyUTMArg *arg;
                        arg = (GPRecvBuddyUTMArg *) gsimalloc(sizeof(GPRecvBuddyUTMArg));
                        if (arg == 0) {
                            gpiSetErrorString(connection, data_020fb58c);
                            return 1;
                        }
                        arg->profile = peer->profile;
                        arg->message = goastrdup(buffer);
                        arg->date    = time(0);
                        {
                            int __result__ = gpiAddCallback(connection, callback, arg, 0, 2);
                            if (__result__ != 0) {
                                return __result__;
                            }
                        }
                    }
                    break;

                case 0x66:
                    gpiSendBuddyMessage(connection, peer->profile, 0x67, data_020fb59c, 0, 0);
                    break;

                case 0x68: {
                    int __result__ = func_02060d00(connection, peer);
                    if (__result__ != 0) {
                        return __result__;
                    }
                } break;

                case 0x69: {
                    int __result__ = gpiBuddyHandleKeyReply(connection, peer, buffer);
                    if (__result__ != 0) {
                        return __result__;
                    }
                } break;

                case 200:
                case 201:
                case 202:
                case 203:
                case 204:
                case 205:
                case 206:
                case 207:
                case 208:
                    gpiHandleTransferMessage(connection, peer, type, peer->inputBuffer.buffer, buffer, messageLen);
                    break;

                default:
                    break;
            }

            gpiClipBufferToPosition(connection, &peer->inputBuffer);
        }
    } while (buffer);

    gsUdpEngineGetPeerState(peer->ip, peer->port, &aPeerState);
    if (aPeerState == 3) {
        peer->state = 0x6A;
    }

    return 0;
}
