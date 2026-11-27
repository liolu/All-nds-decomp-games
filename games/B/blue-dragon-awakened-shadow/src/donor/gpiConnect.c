/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiConnect from https://github.com/Project-Holon/aletheia src/game/ov009/gpiconnect.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef void *GPConnection;
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
typedef struct GPIConnectData {
    char serverChallenge[128];
    char userChallenge[33];
    char passwordHash[33];
    char authtoken[256];
    char partnerchallenge[256];
    char cdkey[65];
    int newuser;
} GPIConnectData;
extern void strzcpy(char *p, const char *src, int n);
extern void gpiSetErrorString(void **connection, char *errorString);
extern int gpiReset(GPConnection *connection);
extern int gpiProcess(void **connection, int blockingOperationID);
extern char *_strlwr(char *s);
extern void *gsimalloc(unsigned long size);
extern void *memset(void *dest, int c, u32 n);
extern int gpiFailedOpCallback(void **connection, const GPIOperation *operation);
extern int gpiAddOperation(void **connection, int type, void *data, GPIOperation **op, int blocking,
                           void (*callback)(void **, void *, void *), void *param);
extern int gpiStartConnect(void **connection, GPIOperation *operation);
extern int gpiConnect(void **connection, char *nick, char *uniquenick, char *email, char *password, char *authtoken,
                      char *partnerchallenge, char *cdkey, int firewall, int newuser, int blocking,
                      void (*callback)(void **, void *, void *), void *param);
extern void gpiDisconnect(void **connection, int tellServer);
extern char data_020faf28[];
extern char data_020faf3c[];
int gpiStartConnect(void **connection, GPIOperation *operation);
int gpiConnect(void **connection, char *nick, char *uniquenick, char *email, char *password, char *authtoken,
               char *partnerchallenge, char *cdkey, int firewall, int newuser, int blocking,
               void (*callback)(void **, void *, void *), void *param) {
    GPIConnectData *data;
    GPIOperation *operation;
    GPIConnection *iconnection = (GPIConnection *) *connection;
    int result;

    if (iconnection->connectState == 4) {
        int __result__ = gpiReset(connection);
        if (__result__ != 0) {
            return __result__;
        }
    }
    if (iconnection->connectState != 0) {
        gpiSetErrorString(connection, data_020faf28);
        return 2;
    }

    iconnection->firewall = 1;
    strzcpy(iconnection->nick, nick, 31);
    strzcpy(iconnection->uniquenick, uniquenick, 21);
    strzcpy(iconnection->email, email, 51);
    strzcpy(iconnection->password, password, 31);
    _strlwr(iconnection->email);

    data = (GPIConnectData *) gsimalloc(sizeof(GPIConnectData));
    if (data == 0) {
        gpiSetErrorString(connection, data_020faf3c);
        return 1;
    }
    memset(data, 0, sizeof(GPIConnectData));
    data->newuser = newuser;
    if (authtoken[0] && partnerchallenge[0]) {
        strzcpy(data->authtoken, authtoken, 256);
        strzcpy(data->partnerchallenge, partnerchallenge, 256);
    }
    if (cdkey) {
        strzcpy(data->cdkey, cdkey, 65);
    }

    {
        int __result__ = gpiAddOperation(connection, 0, data, &operation, blocking, callback, param);
        if (__result__ != 0) {
            return __result__;
        }
    }

    result = gpiStartConnect(connection, operation);
    if (result != 0) {
        operation->result = result;
        gpiFailedOpCallback(connection, operation);
        gpiDisconnect(connection, 0);
        return result;
    }

    if (operation->blocking) {
        int __result__ = gpiProcess(connection, operation->id);
        if (__result__ != 0) {
            return __result__;
        }
    }
    return 0;
}
void gpiDisconnect(void **connection, int tellServer);
