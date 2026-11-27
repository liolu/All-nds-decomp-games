/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiProcess from https://github.com/Project-Holon/aletheia src/game/ov009/gpi.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
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
extern void msleep(unsigned int msec);
extern int func_02063600(void **connection);
extern void gpiDisconnect(void **connection, int tellServer);
extern int gpiFailedOpCallback(void **connection, const GPIOperation *operation);
extern void gpiRemoveOperation(void **connection, GPIOperation *operation);
extern int gpiFindOperationByID(void **connection, GPIOperation **operation, int id);
extern int func_020621fc(void **connection, int blockingOperationID);
extern int gpiReset(GPConnection *connection);
extern int func_0205f078(void **connection);
extern int func_02066f50(void **connection);
extern int func_0206a564(void **connection);
extern int gpiReset(void **connection);
int gpiReset(GPConnection *connection);
int func_0205f078(void **connection);
int gpiProcess(void **connection, int blockingOperationID) {
    GPIConnection *iconnection;
    GPIOperation *operation;
    int result;
    int loop;
    int __result__;

    iconnection = (GPIConnection *) *connection;
    result      = 0;

    if (iconnection->connectState == 1) {
        do {
            result = func_02063600(connection);
            if (result == 0 && blockingOperationID != 0 && iconnection->connectState == 1) {
                loop = 1;
            } else {
                loop = 0;
            }
            if (loop) {
                msleep(10);
            }
        } while (loop);

        if (result != 0) {
            if (gpiFindOperationByID(connection, &operation, 1)) {
                operation->result = 4;
            }
        }
    }

    if (iconnection->connectState == 3 || iconnection->connectState == 2 || iconnection->connectState == 5) {
        if (result == 0) {
            result = func_0205f078(connection);
        }
        if (result == 0) {
            result = func_02066f50(connection);
        }
    }
    if (result == 0) {
        result = func_0206a564(connection);
    }

    operation = iconnection->operationList;
    while (operation != 0) {
        if (operation->result == 0) {
            operation = operation->pnext;
        } else {
            GPIOperation *op;
            gpiFailedOpCallback(connection, operation);
            op        = operation;
            operation = op->pnext;
            gpiRemoveOperation(connection, op);
        }
    }

    __result__ = func_020621fc(connection, blockingOperationID);
    if (__result__ != 0) {
        return __result__;
    }
    if (iconnection->fatalError != 0) {
        gpiDisconnect(connection, 0);
        gpiReset(connection);
    }
    return result;
}
