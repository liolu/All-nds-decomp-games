/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* create_key_block from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
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
extern void func_02040824(CPSRc4Ctx *ctx, unsigned char *key, int len);
extern void MD5Init(CPSMd5Ctx *ctx);
extern void MD5Update(CPSMd5Ctx *ctx, void *data0, int datalen);
extern void MD5Final(CPSMd5Ctx *ctx, unsigned char *digest);
extern void SHA1Init(CPSSha1Ctx *ctx);
extern void SHA1Update(CPSSha1Ctx *ctx, void *data0, int datalen);
extern void SHA1Final(CPSSha1Ctx *ctx, unsigned char *digest);
extern void func_0203dd30(CPSSslConnection *con);
void func_0203dd30(CPSSslConnection *con) {
    int i, j;
    unsigned char c;
    unsigned char tmp[20];
    void *p;
    int size1, size2, size3;
    int len;

    switch (con->method) {
        case 4:
            size1 = 16;
            size2 = 16;
            size3 = 0;
            break;
        case 5:
            size1 = 20;
            size2 = 16;
            size3 = 0;
            break;
    }
    len = (size1 + size2 + size3) * 2;
    for (i = 0; i * 16 < len; i++) {
        p = &con->sha1_hash_tmp;
        SHA1Init(p);
        c = 'A' + i;
        for (j = 0; j < i + 1; j++) {
            SHA1Update(p, &c, 1);
        }
        SHA1Update(p, con->master_secret, 48);
        SHA1Update(p, con->server_random, 32);
        SHA1Update(p, con->client_random, 32);
        SHA1Final(p, tmp);
        p = &con->md5_hash_tmp;
        MD5Init(p);
        MD5Update(p, con->master_secret, 48);
        MD5Update(p, tmp, 20);
        MD5Final(p, con->common1.key_block + i * 16);
    }
    if (con->server) {
        con->rcv_mac  = con->common1.key_block;
        con->rcv_key  = con->common1.key_block + size1 * 2;
        con->send_mac = con->common1.key_block + size1;
        con->send_key = con->send_mac + size1 + size2;
    } else {
        con->send_mac = con->common1.key_block;
        con->send_key = con->common1.key_block + size1 * 2;
        con->rcv_mac  = con->common1.key_block + size1;
        con->rcv_key  = con->rcv_mac + size1 + size2;
    }
    func_02040824(&con->rcv_cipher.rc4, con->rcv_key, 16);
    func_02040824(&con->send_cipher.rc4, con->send_key, 16);
}
