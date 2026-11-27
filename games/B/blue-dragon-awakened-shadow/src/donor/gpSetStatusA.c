/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpSetStatusA from https://github.com/Project-Holon/aletheia src/game/ov009/gp.c (license: none (MIT = tooling only)), reused
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
extern void strzcpy(char *p, const char *src, int n);
extern void gpiSetErrorString(void **connection, char *errorString);
extern int gpiAppendStringToBuffer(void **connection, GPIBuffer *buffer, const char *string);
extern int gpiAppendIntToBuffer(void **connection, GPIBuffer *buffer, int value);
extern int strcmp(const char *s1, const char *s2);
extern int gpSetStatusA(GPConnection *connection, int status, const char *statusString, const char *locationString);
extern char data_020fa980[];
extern char data_020fa9cc[];
extern char data_020fa9f4[];
extern char data_020faa1c[];
extern char data_020faa34[];
extern char data_020faa4c[];
extern char data_020faa58[];
extern char data_020faa68[];
int gpSetStatusA(GPConnection *connection, int status, const char *statusString, const char *locationString) {
    char statusStringFixed[256];
    char locationStringFixed[256];
    GPIConnection *iconnection;
    int i;

    if (connection == 0 || (iconnection = (GPIConnection *) *connection) == 0) {
        return 2;
    }
    if (iconnection->simulation != 0) {
        return 0;
    }
    if (iconnection->connectState == 4) {
        gpiSetErrorString(connection, data_020fa980);
        return 2;
    }
    if (statusString == 0) {
        gpiSetErrorString(connection, data_020faa1c);
        return 2;
    }
    if (locationString == 0) {
        gpiSetErrorString(connection, data_020faa34);
        return 2;
    }

    strzcpy(statusStringFixed, statusString, sizeof(statusStringFixed));
    for (i = 0; statusStringFixed[i]; i++) {
        if (statusStringFixed[i] == '\\') {
            statusStringFixed[i] = '/';
        }
    }
    strzcpy(locationStringFixed, locationString, sizeof(locationStringFixed));
    for (i = 0; locationStringFixed[i]; i++) {
        if (locationStringFixed[i] == '\\') {
            locationStringFixed[i] = '/';
        }
    }

    if (status == iconnection->lastStatusState && strcmp(statusStringFixed, iconnection->lastStatusString) == 0 &&
        strcmp(locationStringFixed, iconnection->lastLocationString) == 0) {
        return 0;
    }

    iconnection->lastStatusState = status;
    strzcpy(iconnection->lastStatusString, statusStringFixed, sizeof(iconnection->lastStatusString));
    strzcpy(iconnection->lastLocationString, locationStringFixed, sizeof(iconnection->lastLocationString));

    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, data_020faa4c);
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, status);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, data_020fa9cc);
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, data_020faa58);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, statusStringFixed);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, data_020faa68);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, locationStringFixed);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, data_020fa9f4);
    return 0;
}
