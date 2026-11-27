/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0598 from https://github.com/pret/pokeplatinum lib/crypto/src/rc4_init.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct CRYPTORC4Context {
    u8 i, j;
    u8 padd[2];
    u8 s[256];
} CRYPTORC4Context;
extern void func_020a0598(CRYPTORC4Context *ctx, const void *key, u32 keyLength);
void func_020a0598(CRYPTORC4Context *ctx, const void *key, u32 keyLength) {
    u8 *s;
    u8 id1, id2;
    int i;

    if (keyLength > 16) {
        keyLength = 16;
    }

    ctx->i = 0;
    ctx->j = 0;

    s = ctx->s;

    for (i = 0; i < 256; i++) {
        s[i] = i;
    }

    id1 = id2 = 0;
    for (i = 0; i < 256; i++) {
        u8 tmp = s[i];
        id2    = (((u8 *) key)[id1] + tmp + id2);
        if (++id1 == (u8) keyLength) {
            id1 = 0;
        }
        s[i]   = s[id2];
        s[id2] = tmp;
    }
}
