/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* rcv_certificate from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef enum RTCWeek {
    RTC_WEEK_SUNDAY = 0,
    RTC_WEEK_MONDAY,
    RTC_WEEK_TUESDAY,
    RTC_WEEK_WEDNESDAY,
    RTC_WEEK_THURSDAY,
    RTC_WEEK_FRIDAY,
    RTC_WEEK_SATURDAY,
    RTC_WEEK_MAX
} RTCWeek;
typedef enum RTCResult {
    RTC_RESULT_SUCCESS = 0,
    RTC_RESULT_BUSY,
    RTC_RESULT_ILLEGAL_PARAMETER,
    RTC_RESULT_SEND_ERROR,
    RTC_RESULT_INVALID_COMMAND,
    RTC_RESULT_ILLEGAL_STATUS,
    RTC_RESULT_FATAL_ERROR,
    RTC_RESULT_MAX
} RTCResult;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
typedef struct SOCLCaInfo {
    char *dn;
    int modulo_len;
    unsigned char *modulo;
    int exponent_len;
    unsigned char *exponent;
} SOCLCaInfo;
typedef struct CPSPrivateKey {
    int size;
    unsigned char *p0;
    int l1;
    unsigned char *p1;
    int l2;
    unsigned char *p2;
    int l3;
    unsigned char *p3;
    int l4;
    unsigned char *p4;
    int l5;
    unsigned char *p5;
} CPSPrivateKey;
typedef struct CPSSha1Ctx {
    u32 state[5];
    u32 count[2];
    unsigned char buffer[64];
} CPSSha1Ctx;
typedef struct CPSMd5Ctx {
    u32 state[4];
    u32 count[2];
    unsigned char buffer[64];
} CPSMd5Ctx;
typedef struct CPSRc4Ctx {
    unsigned char x;
    unsigned char y;
    unsigned char m[256];
} CPSRc4Ctx;
typedef union CPSCipherCtx {
    CPSRc4Ctx rc4;
    unsigned char b[0x104];
} CPSCipherCtx;
typedef struct CPSSslConnection CPSSslConnection;
struct CPSSslConnection {
    unsigned char master_secret[48];
    unsigned char cache;
    unsigned char resumed;
    unsigned short method;
    unsigned char client_random[32];
    unsigned char server_random[32];
    union {
        unsigned char session_id[0x20];
        unsigned char key_block[72];
    } common1;
    unsigned char *send_mac;
    unsigned char *send_key;
    unsigned char *send_iv;
    CPSCipherCtx send_cipher;
    unsigned char send_seq[8];
    unsigned char *rcv_mac;
    unsigned char *rcv_key;
    unsigned char *rcv_iv;
    CPSCipherCtx rcv_cipher;
    unsigned char rcv_seq[8];
    CPSSha1Ctx sha1_hash;
    CPSSha1Ctx sha1_hash_tmp;
    CPSMd5Ctx md5_hash;
    CPSMd5Ctx md5_hash_tmp;
    unsigned char server;
    unsigned char state;
    unsigned char have_record;
    unsigned char pad457;
    int hash_type;
    int pubkeyAlgo;
    unsigned char *cert_start;
    unsigned char *cert_end;
    unsigned char hash[0x14];
    int hash_len;
    SOCLCaInfo ca;
    unsigned char modulus[0x100];
    int modlen;
    unsigned char pubexp[8];
    int pubexplen;
    unsigned char *sig;
    int sig_len;
    unsigned char subjectPhase;
    unsigned char keyInfoOid;
    unsigned char cnOid;
    unsigned char dateValid;
    char dn[0x100];
    unsigned char subjectDn[0x100];
    unsigned char commonName[0x50];
    char *hostName;
    unsigned char *certData;
    int certLen;
    int currentDate;
    int (*f810)(int result, CPSSslConnection *con, int level);
    SOCLCaInfo **rootCa;
    int rootCaNum;
    CPSPrivateKey *privkey;
    unsigned char pad820[4];
    unsigned char *buf;
    unsigned long end;
    unsigned long pos;
};
extern RTCResult func_020dba9c(RTCDate *date);
extern int func_020a9130(CPSSslConnection *con);
extern int func_020a9238(char *name, char *pat);
extern int func_020a8f88(CPSSslConnection *con, SOCLCaInfo *ca);
extern void func_020a92a4(CPSSslConnection *con, unsigned char *s);
int func_020a8a98(CPSSslConnection *con, unsigned char **ps, int level, int seq, int mode);
int func_020a8f88(CPSSslConnection *con, SOCLCaInfo *ca);
int func_020a9130(CPSSslConnection *con);
int func_020a9238(char *name, char *pat);
void func_020a92a4(CPSSslConnection *con, unsigned char *s) {
    RTCDate date;
    int result0;
    int result;
    int remaining_certlen;
    int this_certlen;
    unsigned char *s2;
    int parse_mode;
    int level;

    remaining_certlen = (((s[0] << 8) + s[1]) << 8) + s[2];
    s += 3;
    con->pubkeyAlgo = -1;
    func_020dba9c(&date);
    parse_mode        = 0;
    level             = 0;
    con->currentDate  = ((date.year + 2000) << 16) + (date.month << 8) + date.day;
    con->subjectDn[0] = 0;
    con->pubexplen    = 0;
    con->modlen       = 0;
    for (;;) {
        this_certlen = (((s[0] << 8) + s[1]) << 8) + s[2];
        s += 3;
        remaining_certlen -= this_certlen + 3;
        con->hash_type     = -1;
        con->keyInfoOid    = 0;
        con->subjectPhase  = 0;
        con->dateValid     = 0;
        con->subjectDn[0]  = 0;
        con->dn[0]         = 0;
        con->commonName[0] = 0;
        con->certData      = s;
        con->certLen       = this_certlen;

        if (func_020a8a98(con, &s, 0, 0, parse_mode) != 0 || (unsigned int) con->modlen < 0x33 || con->pubexplen == 0) {
            con->state = 9;
            return;
        }
        result = func_020a9130(con);
        if (level == 0 && con->hostName != 0) {
            if (func_020a9238(con->hostName, (char *) con->commonName) != 0) {
                result |= 0x4000;
            }
        }
        result0 = result & 0xff;
        if (result0 == 1 && remaining_certlen != 0) {
            s2              = s + 3;
            con->keyInfoOid = 0;
            if (func_020a8a98(con, &s2, 0, 0, 2) != 0) {
                con->state = 9;
                return;
            }
            result = (result & ~0xff) | func_020a8f88(con, &con->ca);
        }
        if (con->f810 != 0) {
            result = con->f810(result, con, level);
        }
        level++;
        if (result0 == 0 || result != 0 || remaining_certlen == 0) {
            break;
        }
        parse_mode = 1;
    }
    if (result == 0) {
        con->state = 3;
    } else {
        con->state = 9;
    }
}
