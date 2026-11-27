/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiProcessPeerAcceptingConnection from https://github.com/Project-Holon/aletheia src/game/ov009/gpipeer.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
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
extern int gpiAppendStringToBuffer(void **connection, GPIBuffer *buffer, const char *string);
extern int gpiSendBufferToPeer(GPIConnection **connection, unsigned int ip, unsigned short port, GPIBuffer *outputBuffer,
                               int *closed, int clipSentData);
extern int gsUdpEngineGetPeerState(unsigned int ip, unsigned short port, int *state);
extern int gpiValueForKey(const char *command, const char *key, char *value, int valueLen);
extern size_t strlen(const char *str);
extern int strcmp(const char *s1, const char *s2);
extern int strncmp(const char *str1, const char *str2, size_t n);
extern char *strstr(const char *str1, const char *str2);
extern int gpiSendBufferToPeer(struct GPIConnection **connection, unsigned int ip, unsigned short port,
                               struct GPIBuffer *outputBuffer, int *closed, int clipSentData);
extern int atoi(const char *s);
extern int func_020068c0(char *dst, const char *fmt, ...);
extern void MD5Digest(unsigned char *input, unsigned int len, char *output);
extern int gpiProcessPeerAcceptingConnection(void **connection, GPIPeer *peer);
extern char data_020fb508[];
extern char data_020fb510[];
extern char data_020fb518[];
extern char data_020fb520[];
extern char data_020fb528[];
extern char data_020fb530[];
extern char data_020fb55c[];
extern char data_020fb584[];
int gpiProcessPeerAcceptingConnection(void **connection, GPIPeer *peer) {
    GPIConnection *iconnection = (GPIConnection *) *connection;
    int aPeerState;
    char *str;
    int connClosed;
    char intValue[16];
    int pid;
    char nick[31];
    char sig[33];
    char sigCheck[33];
    char buffer[256];

    if (peer->state != 0x68) {
        return 3;
    }

    gsUdpEngineGetPeerState(peer->ip, peer->port, &aPeerState);
    if (aPeerState == 3) {
        peer->state = 0x6A;
        return 0;
    }

    str = (char *) strstr(peer->inputBuffer.buffer, data_020fb528);
    if (str) {
        *str = '\0';

        str = peer->inputBuffer.buffer;
        if (strncmp(str, data_020fb508, 6) == 0) {
            if (!gpiValueForKey(str, data_020fb510, intValue, sizeof(intValue))) {
                peer->state = 0x6A;
                return 0;
            }
            pid = atoi(intValue);

            if (!gpiValueForKey(peer->inputBuffer.buffer, data_020fb518, nick, sizeof(nick))) {
                peer->state = 0x6A;
                return 0;
            }

            if (!gpiValueForKey(peer->inputBuffer.buffer, data_020fb520, sig, sizeof(sig))) {
                peer->state = 0x6A;
                return 0;
            }

            func_020068c0(buffer, data_020fb584, iconnection->password, iconnection->profileid, pid);
            MD5Digest((unsigned char *) buffer, strlen(buffer), sigCheck);

            if (strcmp(sig, sigCheck) != 0) {
                gpiAppendStringToBuffer(connection, (&peer->outputBuffer), data_020fb530);
                gpiAppendStringToBuffer(connection, (&peer->outputBuffer), data_020fb528);
                gpiSendBufferToPeer((struct GPIConnection **) connection, peer->ip, peer->port, &peer->outputBuffer,
                                    &connClosed, 1);
                peer->state = 0x6A;
                return 0;
            }

            gpiAppendStringToBuffer(connection, (&peer->outputBuffer), data_020fb55c);
            gpiAppendStringToBuffer(connection, (&peer->outputBuffer), data_020fb528);

            peer->state   = 0x69;
            peer->profile = pid;
        } else {
            peer->state = 0x6A;
            return 0;
        }

        peer->inputBuffer.len = 0;
    }

    return 0;
}
