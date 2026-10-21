/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020af334 from https://github.com/LagoLunatic/ooe libs/GameSpy/GP/gpiBuddy.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef int time_t;
typedef unsigned int gsi_time;
typedef int gsi_bool;
typedef struct DArrayImplementation *DArray;
typedef enum _GPEnum {

    GP_ERROR = 0,
    GP_RECV_BUDDY_REQUEST,
    GP_RECV_BUDDY_STATUS,
    GP_RECV_BUDDY_MESSAGE,
    GP_RECV_BUDDY_UTM,
    GP_RECV_GAME_INVITE,
    GP_TRANSFER_CALLBACK,
    GP_RECV_BUDDY_AUTH,
    GP_RECV_BUDDY_REVOKE,

    GP_INFO_CACHING = 0x0100,
    GP_SIMULATION,
    GP_INFO_CACHING_BUDDY_AND_BLOCK_ONLY,

    GP_BLOCKING     = 1,
    GP_NON_BLOCKING = 0,

    GP_FIREWALL    = 1,
    GP_NO_FIREWALL = 0,

    GP_CHECK_CACHE      = 1,
    GP_DONT_CHECK_CACHE = 0,

    GP_VALID   = 1,
    GP_INVALID = 0,

    GP_FATAL     = 1,
    GP_NON_FATAL = 0,

    GP_MALE = 0x0500,
    GP_FEMALE,
    GP_PAT,

    GP_MORE = 0x0600,
    GP_DONE,

    GP_NICK = 0x0700,
    GP_UNIQUENICK,
    GP_EMAIL,
    GP_PASSWORD,
    GP_FIRSTNAME,
    GP_LASTNAME,
    GP_ICQUIN,
    GP_HOMEPAGE,
    GP_ZIPCODE,
    GP_COUNTRYCODE,
    GP_BIRTHDAY,
    GP_SEX,
    GP_CPUBRANDID,
    GP_CPUSPEED,
    GP_MEMORY,
    GP_VIDEOCARD1STRING,
    GP_VIDEOCARD1RAM,
    GP_VIDEOCARD2STRING,
    GP_VIDEOCARD2RAM,
    GP_CONNECTIONID,
    GP_CONNECTIONSPEED,
    GP_HASNETWORK,
    GP_OSSTRING,
    GP_AIMNAME,
    GP_PIC,
    GP_OCCUPATIONID,
    GP_INDUSTRYID,
    GP_INCOMEID,
    GP_MARRIEDID,
    GP_CHILDCOUNT,
    GP_INTERESTS1,

    GP_REPLACE      = 1,
    GP_DONT_REPLACE = 0,

    GP_CONNECTED     = 1,
    GP_NOT_CONNECTED = 0,

    GP_MASK_NONE        = 0x00000000,
    GP_MASK_HOMEPAGE    = 0x00000001,
    GP_MASK_ZIPCODE     = 0x00000002,
    GP_MASK_COUNTRYCODE = 0x00000004,
    GP_MASK_BIRTHDAY    = 0x00000008,
    GP_MASK_SEX         = 0x00000010,
    GP_MASK_EMAIL       = 0x00000020,
    GP_MASK_ALL         = 0xFFFFFFFF,

    GP_OFFLINE  = 0,
    GP_ONLINE   = 1,
    GP_PLAYING  = 2,
    GP_STAGING  = 3,
    GP_CHATTING = 4,
    GP_AWAY     = 5,

    GP_SESS_IS_CLOSED     = 0x00000001,
    GP_SESS_IS_OPEN       = 0x00000002,
    GP_SESS_HAS_PASSWORD  = 0x00000004,
    GP_SESS_IS_BEHIND_NAT = 0x00000008,
    GP_SESS_IS_RANKED     = 0x000000010,

    GP_INTEL = 1,
    GP_AMD,
    GP_CYRIX,
    GP_MOTOROLA,
    GP_ALPHA,

    GP_MODEM = 1,
    GP_ISDN,
    GP_CABLEMODEM,
    GP_DSL,
    GP_SATELLITE,
    GP_ETHERNET,
    GP_WIRELESS,

    GP_TRANSFER_SEND_REQUEST = 0x800,
    GP_TRANSFER_ACCEPTED,
    GP_TRANSFER_REJECTED,
    GP_TRANSFER_NOT_ACCEPTING,
    GP_TRANSFER_NO_CONNECTION,
    GP_TRANSFER_DONE,
    GP_TRANSFER_CANCELLED,
    GP_TRANSFER_LOST_CONNECTION,
    GP_TRANSFER_ERROR,
    GP_TRANSFER_THROTTLE,
    GP_FILE_BEGIN,
    GP_FILE_PROGRESS,
    GP_FILE_END,
    GP_FILE_DIRECTORY,
    GP_FILE_SKIP,
    GP_FILE_FAILED,

    GP_FILE_READ_ERROR = 0x900,
    GP_FILE_WRITE_ERROR,
    GP_FILE_DATA_ERROR,

    GP_TRANSFER_SENDER = 0xA00,
    GP_TRANSFER_RECEIVER,

    GP_DONT_ROUTE = 0xB00,

    GP_SILENCE_NONE     = 0x00000000,
    GP_SILENCE_MESSAGES = 0x00000001,
    GP_SILENCE_UTMS     = 0x00000002,
    GP_SILENCE_LIST     = 0x00000004,
    GP_SILENCE_ALL      = 0xFFFFFFFF,

    GP_NEW_STATUS_INFO_SUPPORTED     = 0xC00,
    GP_NEW_STATUS_INFO_NOT_SUPPORTED = 0xC01
} GPEnum;
typedef enum _GPResult {
    GP_NO_ERROR,
    GP_MEMORY_ERROR,
    GP_PARAMETER_ERROR,
    GP_NETWORK_ERROR,
    GP_SERVER_ERROR,
    GP_MISC_ERROR,
    GP_COUNT
} GPResult;
typedef void *GPConnection;
typedef int GPProfile;
typedef void (*GPCallback)(GPConnection *connection, void *arg, void *param);
typedef enum _GPIBool {
    GPIFalse,
    GPITrue
} GPIBool;
typedef struct {
    char *buffer;
    int size;
    int len;
    int pos;
} GPIBuffer;
typedef struct {
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
    GPEnum sex;
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
typedef struct _GPIBuddyStatusInfo {
    int buddyIndex;
    GPEnum statusState;
    char *richStatus;
    char *gameType;
    char *gameVariant;
    char *gameMapName;
    unsigned int sessionFlags;
    unsigned int buddyIp;
    unsigned short buddyPort;
    unsigned int hostIp;
    unsigned int hostPrivateIp;
    unsigned short queryPort;
    unsigned short hostPort;
    GPEnum quietModeFlags;
    int productId;

    DArray extendedInfoKeys;
} GPIBuddyStatusInfo;
typedef struct {
    int buddyIndex;
    GPEnum status;
    char *statusString;
    char *locationString;
    unsigned int ip;
    unsigned short port;
    GPEnum quietModeFlags;
} GPIBuddyStatus;
typedef struct GPIProfile {
    int profileId;
    int userId;
    GPIBuddyStatus *buddyStatus;
    GPIBuddyStatusInfo *buddyStatusInfo;
    GPIInfoCache *cache;
    char *authSig;
    int requestCount;
    char *peerSig;
    gsi_bool blocked;
    int blockIndex;
    gsi_bool buddyOrBlockCache;
} GPIProfile;
extern GPIBool func_020b6284(GPConnection *connection, GPProfile profileid, GPIProfile **pProfile);
typedef enum {
    GPI_PEER_OP_STATE_NONE,
    GPI_PEER_OP_STATE_REQUESTED,
    GPI_PEER_OP_STATE_FINISHED
} GPIPeerOpState;
typedef struct _GPIPeerOp {
    GPIPeerOpState state;
    void *userData;
    GPCallback callback;
    struct _GPIPeerOp *next;
    int type;
    gsi_time timeout;
} GPIPeerOp;
typedef struct _GPIPeerOpQueue {
    GPIPeerOp *opList;
    GPIPeerOp *first;
    GPIPeerOp *last;
} GPIPeerOpQueue;
typedef struct GPIPeer_s {
    int state;
    GPIBool initiated;

    unsigned int ip;
    unsigned short port;
    GPProfile profile;
    time_t timeout;
    int nackCount;
    GPIBuffer inputBuffer;
    GPIBuffer outputBuffer;
    DArray messages;
    GPIPeerOpQueue peerOpQueue;
    struct GPIPeer_s *pnext;
} GPIPeer;
extern GPResult func_020b58b8(GPConnection *connection, GPIPeer *peer);
extern GPResult func_020b591c(GPConnection *connection, GPIPeer *peer);
extern GPIPeer *func_020b5798(const GPConnection *connection, int profileid);
extern GPIPeer *func_020b582c(GPConnection *connection, int profileid, GPIBool initiate);
extern GPResult func_020b5a1c(GPConnection *connection, GPIPeer *peer, int type, const char *message);
extern void func_020b5e08(GPIPeer *peer, GPIPeerOp *operation);
extern GPResult func_020af258(GPConnection *connection, int profileid, int type, const char *message);
extern GPResult func_020af334(GPConnection *connection, int profileid, int type, const char *message, int sendOptions,
                              GPIPeerOp *peerOp);
GPResult func_020af258(GPConnection *connection, int profileid, int type, const char *message);
GPResult func_020af334(GPConnection *connection, int profileid, int type, const char *message, int sendOption,
                       GPIPeerOp *peerOp) {
    GPIPeer *peer;
    GPIProfile *profile;

    peer = func_020b5798(connection, profileid);
    if (!peer) {

        if (!func_020b6284(connection, profileid, &profile) ||
            (!profile->buddyStatusInfo || !profile->buddyStatusInfo->buddyPort)) {
            if (sendOption == GP_DONT_ROUTE) {
                return GP_NETWORK_ERROR;
            }
            return func_020af258(connection, profileid, type, message);
        }

        peer = func_020b582c(connection, profileid, GPITrue);
        if (!peer) {
            return GP_MEMORY_ERROR;
        }

        if (!profile->peerSig) {

            {
                GPResult __result__ = (func_020b58b8(connection, peer));
                if (__result__ != GP_NO_ERROR) {
                    return __result__;
                }
            };
        } else {

            {
                GPResult __result__ = (func_020b591c(connection, peer));
                if (__result__ != GP_NO_ERROR) {
                    return __result__;
                }
            };
        }
    } else if (peer->state == 106) {
        if (func_020b6284(connection, profileid, &profile)) {

            if (profile->buddyStatusInfo) {
                profile->buddyStatusInfo->buddyPort = 0;
            }

            if (sendOption == GP_DONT_ROUTE) {
                return GP_NETWORK_ERROR;
            }
            if (type < 100) {
                return func_020af258(connection, profileid, type, message);
            }
        }
    }

    if (peerOp) {
        func_020b5e08(peer, peerOp);
    }

    {
        GPResult __result__ = (func_020b5a1c(connection, peer, type, message));
        if (__result__ != GP_NO_ERROR) {
            return __result__;
        }
    };

    return GP_NO_ERROR;
}
