/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* validate_signature from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long size_t;
extern void func_0204109c(u16 *c, u16 *a, u16 *b, int digits, u16 *n);
extern void func_020416b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_0204170c(unsigned char *d, unsigned short *s, int numbytes, int digits);
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
extern void *(*data_0210ca30)(unsigned long size);
extern void (*CPSiFree)(void *ptr);
typedef unsigned long size_t;
extern int memcmp(const void *a, const void *b, size_t n);
extern void func_020416b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern void func_0204109c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, unsigned short *n);
extern void func_0203cb1c(unsigned long old_priority);
extern int func_0203d1e0(CPSSslConnection *con, SOCLCaInfo *ca);
extern void func_020416b0(unsigned short *d, unsigned char *s, int numbytes, int digits);
extern unsigned long SSLi_RaisePriority(void);
extern void func_0204109c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, unsigned short *n);
unsigned long SSLi_RaisePriority(void);
void func_0203cb1c(unsigned long old_priority);
int func_0203d1e0(CPSSslConnection *con, SOCLCaInfo *ca) {
    unsigned short *tmp_var;
    unsigned short *b;
    unsigned short *c;
    unsigned short *n;
    int digits;
    unsigned char *s;
    int result;
    int i;
    unsigned long old_priority;

    if (con->sig == 0 || con->sig_len == 0 || ca->exponent == 0 || ca->exponent_len == 0 || ca->modulo == 0 ||
        ca->modulo_len == 0) {
        return 2;
    }
    digits  = ca->modulo_len * 2 / 2;
    tmp_var = (unsigned short *) data_0210ca30(digits * 8);
    if (tmp_var == 0) {
        return 2;
    }
    b = tmp_var + digits;
    c = b + digits;
    n = c + digits;
    func_020416b0(b, con->sig, con->sig_len, digits);
    func_020416b0(c, ca->exponent, ca->exponent_len, digits);
    func_020416b0(n, ca->modulo, ca->modulo_len, digits);
    old_priority = SSLi_RaisePriority();
    func_0204109c(tmp_var, b, c, digits, n);
    func_0203cb1c(old_priority);
    s = (unsigned char *) b;
    func_0204170c(s, tmp_var, ca->modulo_len, digits);
    result = 0;
    if (s[0] != 0 || s[1] != 1) {
        result = 2;
    } else {
        for (i = 2; i < ca->modulo_len; i++) {
            if (s[i] != 0xff) {
                break;
            }
        }
        if (i + 1 >= ca->modulo_len || s[i] != 0 || s[i + 1] != 0x30 ||
            memcmp(con->hash, s + ca->modulo_len - con->hash_len, con->hash_len) != 0) {
            result = 2;
        }
    }
    CPSiFree(tmp_var);
    return result;
}
