/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiFailedOpCallback from https://github.com/Project-Holon/aletheia src/game/ov009/gpioperation.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void *__builtin__clear(void *dest, unsigned long size);
typedef struct GPRegisterUniqueNickResponseArg {
    int result;
} GPRegisterUniqueNickResponseArg;
typedef struct GPRegisterCdKeyResponseArg {
    int result;
} GPRegisterCdKeyResponseArg;
typedef unsigned long u32;
typedef int GPEnum;
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
typedef struct GPConnectResponseArg {
    int result;
    int profile;
    char uniquenick[21];
} GPConnectResponseArg;
typedef struct GPGetInfoResponseArg {
    int result;
    int profile;
    char nick[31];
    char uniquenick[21];
    char email[51];
    char firstname[31];
    char lastname[31];
    char homepage[76];
    int icquin;
    char zipcode[11];
    char countrycode[3];
    float longitude;
    float latitude;
    char place[128];
    int birthday;
    int birthmonth;
    int birthyear;
    int sex;
    int publicmask;
    char aimname[51];
    int pic;
    int occupationid;
    int industryid;
    int incomeid;
    int marriedid;
    int childcount;
    int interests1;
    int ownership1;
    int conntypeid;
} GPGetInfoResponseArg;
typedef struct GPNewProfileResponseArg {
    int result;
    int profile;
} GPNewProfileResponseArg;
typedef struct GPDeleteProfileResponseArg {
    int result;
    int profile;
} GPDeleteProfileResponseArg;
typedef struct GPProfileSearchMatch {
    int profile;
    char nick[31];
    char uniquenick[21];
    int namespaceID;
    char firstname[31];
    char lastname[31];
    char email[51];
} GPProfileSearchMatch;
typedef struct GPProfileSearchResponseArg {
    int result;
    int numMatches;
    GPEnum more;
    GPProfileSearchMatch *matches;
} GPProfileSearchResponseArg;
extern void *gsimalloc(unsigned long size);
extern void gpiSetErrorString(void **connection, char *errorString);
extern void *memset(void *dest, int c, u32 n);
extern int gpiAddCallback(void **connection, GPICallback callback, void *arg, GPIOperation *operation, int type);
extern int gpiFailedOpCallback(void **connection, const GPIOperation *operation);
extern char data_020fb4dc[];
int gpiFailedOpCallback(void **connection, const GPIOperation *operation) {
    GPICallback callback;
    GPIConnection *iconnection;

    iconnection = (GPIConnection *) *connection;
    callback    = operation->callback;
    if (callback.callback) {
        switch (operation->type) {
            case 0: {
                GPConnectResponseArg *arg;
                arg = (GPConnectResponseArg *) gsimalloc(sizeof(GPConnectResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                memset(arg, 0, sizeof(GPConnectResponseArg));
                arg->result = operation->result;
                if (iconnection->errorCode == 0x201) {
                    arg->profile           = iconnection->profileid;
                    iconnection->profileid = 0;
                }
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }

            case 1: {
                GPNewProfileResponseArg *arg;
                arg = (GPNewProfileResponseArg *) gsimalloc(sizeof(GPNewProfileResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                __builtin__clear(arg, sizeof(GPNewProfileResponseArg));
                arg->result = operation->result;
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }

            case 5: {
                GPDeleteProfileResponseArg *arg;
                arg = (GPDeleteProfileResponseArg *) gsimalloc(sizeof(GPDeleteProfileResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                __builtin__clear(arg, sizeof(GPDeleteProfileResponseArg));
                arg->result = operation->result;
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }

            case 2: {
                GPGetInfoResponseArg *arg;
                arg = (GPGetInfoResponseArg *) gsimalloc(sizeof(GPGetInfoResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                memset(arg, 0, sizeof(GPGetInfoResponseArg));
                arg->result = operation->result;
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }

            case 3: {
                GPProfileSearchResponseArg *arg;
                arg = (GPProfileSearchResponseArg *) gsimalloc(sizeof(GPProfileSearchResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                __builtin__clear(arg, sizeof(GPProfileSearchResponseArg));
                arg->result  = operation->result;
                arg->matches = 0;
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }

            case 4: {
                GPRegisterUniqueNickResponseArg *arg;
                arg = (GPRegisterUniqueNickResponseArg *) gsimalloc(sizeof(GPRegisterUniqueNickResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                __builtin__clear(arg, sizeof(GPRegisterUniqueNickResponseArg));
                arg->result = operation->result;
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }

            case 6: {
                GPRegisterCdKeyResponseArg *arg;
                arg = (GPRegisterCdKeyResponseArg *) gsimalloc(sizeof(GPRegisterCdKeyResponseArg));
                if (arg == 0) {
                    gpiSetErrorString(connection, data_020fb4dc);
                    return 1;
                }
                __builtin__clear(arg, sizeof(GPRegisterCdKeyResponseArg));
                arg->result = operation->result;
                {
                    int __result__ = gpiAddCallback(connection, callback, arg, (GPIOperation *) operation, 0);
                    if (__result__ != 0) {
                        return __result__;
                    }
                }
                break;
            }
        }
    }

    return 0;
}
