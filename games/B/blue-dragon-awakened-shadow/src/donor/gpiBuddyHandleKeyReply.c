/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiBuddyHandleKeyReply from https://github.com/Project-Holon/aletheia src/game/ov009/gpibuddy.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern int gpiReadKeyAndValue(void **connection, const char *buffer, int *index, char *key, char *value);
extern void gpiSetError(void **connection, int result, char *errorString);
extern void gpiSetErrorString(void **connection, char *errorString);
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
typedef struct GPIInfoCache {
    char *nick;
    char *uniquenick;
    char *email;
    char *firstname;
    char *lastname;
    char *homepage;
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
    char *aimname;
    int pic;
    int occupationid;
    int industryid;
    int incomeid;
    int marriedid;
    int childcount;
    int interests1;
    int ownership1;
    int conntypeid;
} GPIInfoCache;
typedef struct GPIBuddyStatus {
    int buddyIndex;
    int status;
    char *statusString;
    char *locationString;
    unsigned int ip;
    unsigned short port;
    int quietModeFlags;
} GPIBuddyStatus;
typedef struct GPIBuddyStatusInfo {
    int buddyIndex;
    int statusState;
    char *richStatus;
    char *gameType;
    char *gameVariant;
    char *gameMapName;
    int sessionFlags;
    unsigned int ip;
    unsigned short port;
    unsigned int hostIp;
    unsigned int hostPrivateIp;
    unsigned short queryPort;
    unsigned short hostPort;
    int quietModeFlags;
    int productId;
    void *extendedInfoKeys;
} GPIBuddyStatusInfo;
typedef struct GPIProfile {
    int profileId;
    int userId;
    GPIBuddyStatus *buddyStatus;
    GPIBuddyStatusInfo *buddyStatusInfo;
    GPIInfoCache *cache;
    char *authSig;
    int requestCount;
    char *peerSig;
    int blocked;
    int blockIndex;
    int buddyOrBlockCache;
    int deletedLocally;
} GPIProfile;
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
typedef struct GPGetBuddyStatusInfoKeysArg {
    int profile;
    char **keys;
    char **values;
    int numKeys;
} GPGetBuddyStatusInfoKeysArg;
typedef unsigned long size_t;
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern int atoi(const char *s);
extern void *gsimalloc(unsigned long size);
extern char *goastrdup(char *src);
extern int gpiStatusInfoAddKey(void **connection, void *keys, char *theKeyName, char *theKeyValue);
extern int gpiStatusInfoSetKey(void **connection, void *keys, char *keyName, char *newKeyValue);
extern int gpiStatusInfoCheckKey(void **connection, void *keys, char *keyName, char **keyValue);
extern int gpiCallErrorCallback(void **connection, int result, int fatal);
extern int gpiAddCallback(void **connection, GPICallback callback, void *arg, GPIOperation *operation, int type);
extern void *gsimalloc(unsigned long size);
extern void gpiPeerRemoveOp(GPIPeer *peer, GPIPeerOp *operation);
extern int gpiGetProfile(void **connection, int profileid, GPIProfile **pProfile);
extern void B64Decode(const char *input, char *output, int inlen, int *outlen, int encodingType);
extern int gpiGetProfile(void **connection, int profileid, GPIProfile **pProfile);
extern int gpiBuddyHandleKeyReply(void **connection, GPIPeer *peer, char *buffer);
extern char data_020faca4[];
extern char data_020faca8[];
extern char data_020facbc[];
extern char data_020facc4[];
int gpiBuddyHandleKeyReply(void **connection, GPIPeer *peer, char *buffer) {
    GPIProfile *pProfile;

    if (!gpiGetProfile(connection, peer->profile, &pProfile)) {
        gpiSetErrorString(connection, data_020faca8);
        return 2;
    }

    if (strcmp(buffer, data_020faca4) == 0) {
        GPIPeerOp *anIterator;
        for (anIterator = peer->firstOp; anIterator != 0; anIterator = anIterator->next) {
            if (anIterator->type == 0x68) {
                break;
            }
        }
        if (!anIterator) {
            return 0;
        } else if (anIterator->type == 0x68 && anIterator->callback != 0) {
            GPICallback callback;
            GPGetBuddyStatusInfoKeysArg *arg = gsimalloc(sizeof(GPGetBuddyStatusInfoKeysArg));
            callback.callback                = anIterator->callback;
            callback.param                   = anIterator->userData;
            arg->keys                        = 0;
            arg->numKeys                     = 0;
            arg->values                      = 0;
            arg->profile                     = peer->profile;
            gpiAddCallback(connection, callback, arg, 0, 0);
            gpiPeerRemoveOp(peer, anIterator);
        }
    } else {
        char keyName[512];
        char keyVal[512];
        char decodeKey[512];
        char decodeVal[512];
        char **keys;
        char **values;
        int decodedLen;
        int numKeys;
        int i;
        int index;
        char *checkKey;

        decodedLen = 0;
        index      = 0;
        checkKey   = 0;

        gpiReadKeyAndValue(connection, buffer, &index, keyName, keyVal);
        if (strcmp(keyName, data_020facbc) != 0) {
            gpiSetError(connection, 1, data_020facc4);
            gpiCallErrorCallback(connection, 3, 0);
            return 3;
        }
        numKeys = atoi(keyVal);
        if (numKeys == 0) {
            GPIPeerOp *anIterator;
            for (anIterator = peer->firstOp; anIterator != 0; anIterator = anIterator->next) {
                if (anIterator->type == 0x68) {
                    break;
                }
            }
            if (!anIterator) {
                return 0;
            } else if (anIterator->type == 0x68 && anIterator->callback != 0) {
                GPICallback callback;
                GPGetBuddyStatusInfoKeysArg *arg = gsimalloc(sizeof(GPGetBuddyStatusInfoKeysArg));
                callback.callback                = anIterator->callback;
                callback.param                   = anIterator->userData;
                arg->keys                        = 0;
                arg->numKeys                     = 0;
                arg->values                      = 0;
                arg->profile                     = peer->profile;
                gpiAddCallback(connection, callback, arg, 0, 0);
                gpiPeerRemoveOp(peer, anIterator);
            }
        } else {
            keys   = gsimalloc(sizeof(char *) * numKeys);
            values = gsimalloc(sizeof(char *) * numKeys);
            for (i = 0; i < numKeys; i++) {
                gpiReadKeyAndValue(connection, buffer, &index, keyName, keyVal);
                B64Decode(keyName, decodeKey, (int) strlen((const char *) keyName), &decodedLen, 2);
                decodeKey[decodedLen] = '\0';
                B64Decode(keyVal, decodeVal, (int) strlen((const char *) keyVal), &decodedLen, 2);
                decodeVal[decodedLen] = '\0';
                keys[i]               = goastrdup(decodeKey);
                values[i]             = goastrdup(decodeVal);
                if (gpiStatusInfoCheckKey(connection, pProfile->buddyStatusInfo->extendedInfoKeys, decodeKey, &checkKey) ==
                        0 &&
                    checkKey == 0) {
                    gpiStatusInfoAddKey(connection, pProfile->buddyStatusInfo->extendedInfoKeys, decodeKey, decodeVal);
                } else {
                    gpiStatusInfoSetKey(connection, pProfile->buddyStatusInfo->extendedInfoKeys, decodeKey, decodeVal);
                }
            }

            {
                GPIPeerOp *anIterator;
                for (anIterator = peer->firstOp; anIterator != 0; anIterator = anIterator->next) {
                    if (anIterator->type == 0x68) {
                        break;
                    }
                }
                if (!anIterator) {
                    return 0;
                } else if (anIterator->type == 0x68 && anIterator->callback != 0) {
                    GPICallback callback;
                    GPGetBuddyStatusInfoKeysArg *arg = gsimalloc(sizeof(GPGetBuddyStatusInfoKeysArg));
                    callback.callback                = anIterator->callback;
                    callback.param                   = anIterator->userData;
                    arg->numKeys                     = numKeys;
                    arg->keys                        = keys;
                    arg->values                      = values;
                    arg->profile                     = peer->profile;
                    gpiAddCallback(connection, callback, arg, 0, 0xe);
                    gpiPeerRemoveOp(peer, anIterator);
                }
            }
        }
    }
    return 0;
}
