/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* create_ms_sub from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long size_t;
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
typedef unsigned long size_t;
extern size_t func_020e9580(const char *s);
extern void func_020abec0(CPSMd5Ctx *ctx);
extern void func_020abf08(CPSMd5Ctx *ctx, void *data0, int datalen);
extern void func_020abfc0(CPSMd5Ctx *ctx, unsigned char *digest);
extern void func_020ac780(CPSSha1Ctx *ctx);
extern void func_020ac7d4(CPSSha1Ctx *ctx, void *data0, int datalen);
extern void func_020ac88c(CPSSha1Ctx *ctx, unsigned char *digest);
void func_020a99dc(unsigned char *d, char *salt, CPSSslConnection *con) {
    unsigned char tmp[20];

    func_020ac780(&con->sha1_hash_tmp);
    func_020ac7d4(&con->sha1_hash_tmp, salt, func_020e9580(salt));
    func_020ac7d4(&con->sha1_hash_tmp, con->master_secret, 0x30);
    func_020ac7d4(&con->sha1_hash_tmp, con->client_random, 0x40);
    func_020ac88c(&con->sha1_hash_tmp, tmp);
    func_020abec0(&con->md5_hash_tmp);
    func_020abf08(&con->md5_hash_tmp, con->master_secret, 0x30);
    func_020abf08(&con->md5_hash_tmp, tmp, 0x14);
    func_020abfc0(&con->md5_hash_tmp, d);
}
