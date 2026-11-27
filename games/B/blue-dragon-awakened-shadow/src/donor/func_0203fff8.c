/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_sha1_block from https://github.com/Project-Holon/aletheia src/game/ov009/sha1.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct CPSSha1Ctx {
    u32 state[5];
    u32 count[2];
    unsigned char buffer[64];
} CPSSha1Ctx;
extern unsigned long Sha1ExpandWord(int t, unsigned long *w);
extern unsigned long Sha1ExpandWord(int t, unsigned long *w);
extern void Sha1GetBigEndian(unsigned int *dst, const u8 *src, unsigned int count);
extern void func_0203fff8(CPSSha1Ctx *ctx, u8 *m);
unsigned long Sha1ExpandWord(int t, unsigned long *w);
void Sha1GetBigEndian(unsigned int *dst, const u8 *src, unsigned int count);
void func_0203fff8(CPSSha1Ctx *ctx, u8 *m) {
    unsigned long w[16];
    unsigned long a, b, c, d, e;
    int i;
    int j;

    a = ctx->state[0];
    b = ctx->state[1];
    c = ctx->state[2];
    d = ctx->state[3];
    e = ctx->state[4];
    Sha1GetBigEndian((unsigned int *) w, m, 64);

    i = 0;
    for (j = 0; j < 3; j++) {
        e += (((a) << (5)) | ((a) >> (32 - (5)))) + (((b) & ((c) ^ (d))) ^ (d)) + (w[i + 0]) + (0x5a827999);
        b = (((b) << (30)) | ((b) >> (32 - (30))));
        d += (((e) << (5)) | ((e) >> (32 - (5)))) + (((a) & ((b) ^ (c))) ^ (c)) + (w[i + 1]) + (0x5a827999);
        a = (((a) << (30)) | ((a) >> (32 - (30))));
        c += (((d) << (5)) | ((d) >> (32 - (5)))) + (((e) & ((a) ^ (b))) ^ (b)) + (w[i + 2]) + (0x5a827999);
        e = (((e) << (30)) | ((e) >> (32 - (30))));
        b += (((c) << (5)) | ((c) >> (32 - (5)))) + (((d) & ((e) ^ (a))) ^ (a)) + (w[i + 3]) + (0x5a827999);
        d = (((d) << (30)) | ((d) >> (32 - (30))));
        a += (((b) << (5)) | ((b) >> (32 - (5)))) + (((c) & ((d) ^ (e))) ^ (e)) + (w[i + 4]) + (0x5a827999);
        c = (((c) << (30)) | ((c) >> (32 - (30))));
        i += 5;
    }
    e += (((a) << (5)) | ((a) >> (32 - (5)))) + (((b) & ((c) ^ (d))) ^ (d)) + (w[15]) + (0x5a827999);
    b = (((b) << (30)) | ((b) >> (32 - (30))));
    d += (((e) << (5)) | ((e) >> (32 - (5)))) + (((a) & ((b) ^ (c))) ^ (c)) + (Sha1ExpandWord(0, w)) + (0x5a827999);
    a = (((a) << (30)) | ((a) >> (32 - (30))));
    c += (((d) << (5)) | ((d) >> (32 - (5)))) + (((e) & ((a) ^ (b))) ^ (b)) + (Sha1ExpandWord(1, w)) + (0x5a827999);
    e = (((e) << (30)) | ((e) >> (32 - (30))));
    b += (((c) << (5)) | ((c) >> (32 - (5)))) + (((d) & ((e) ^ (a))) ^ (a)) + (Sha1ExpandWord(2, w)) + (0x5a827999);
    d = (((d) << (30)) | ((d) >> (32 - (30))));
    a += (((b) << (5)) | ((b) >> (32 - (5)))) + (((c) & ((d) ^ (e))) ^ (e)) + (Sha1ExpandWord(3, w)) + (0x5a827999);
    c = (((c) << (30)) | ((c) >> (32 - (30))));

    i = 4;
    for (j = 0; j < 4; j++) {
        e += (((a) << (5)) | ((a) >> (32 - (5)))) + ((b) ^ (c) ^ (d)) + (Sha1ExpandWord(i, w)) + (0x6ed9eba1);
        b = (((b) << (30)) | ((b) >> (32 - (30))));
        d += (((e) << (5)) | ((e) >> (32 - (5)))) + ((a) ^ (b) ^ (c)) + (Sha1ExpandWord(i + 1, w)) + (0x6ed9eba1);
        a = (((a) << (30)) | ((a) >> (32 - (30))));
        i = (i + 2) & 0xf;
        c += (((d) << (5)) | ((d) >> (32 - (5)))) + ((e) ^ (a) ^ (b)) + (Sha1ExpandWord(i, w)) + (0x6ed9eba1);
        e = (((e) << (30)) | ((e) >> (32 - (30))));
        b += (((c) << (5)) | ((c) >> (32 - (5)))) + ((d) ^ (e) ^ (a)) + (Sha1ExpandWord(i + 1, w)) + (0x6ed9eba1);
        d = (((d) << (30)) | ((d) >> (32 - (30))));
        a += (((b) << (5)) | ((b) >> (32 - (5)))) + ((c) ^ (d) ^ (e)) + (Sha1ExpandWord(i + 2, w)) + (0x6ed9eba1);
        c = (((c) << (30)) | ((c) >> (32 - (30))));
        i += 3;
    }
    for (j = 0; j < 4; j++) {
        e +=
            (((a) << (5)) | ((a) >> (32 - (5)))) + (((b) & ((c) | (d))) | ((c) & (d))) + (Sha1ExpandWord(i, w)) + (0x8f1bbcdc);
        b = (((b) << (30)) | ((b) >> (32 - (30))));
        d += (((e) << (5)) | ((e) >> (32 - (5)))) + (((a) & ((b) | (c))) | ((b) & (c))) + (Sha1ExpandWord(i + 1, w)) +
             (0x8f1bbcdc);
        a = (((a) << (30)) | ((a) >> (32 - (30))));
        c += (((d) << (5)) | ((d) >> (32 - (5)))) + (((e) & ((a) | (b))) | ((a) & (b))) + (Sha1ExpandWord(i + 2, w)) +
             (0x8f1bbcdc);
        e = (((e) << (30)) | ((e) >> (32 - (30))));
        i = (i + 3) & 0xf;
        b +=
            (((c) << (5)) | ((c) >> (32 - (5)))) + (((d) & ((e) | (a))) | ((e) & (a))) + (Sha1ExpandWord(i, w)) + (0x8f1bbcdc);
        d = (((d) << (30)) | ((d) >> (32 - (30))));
        a += (((b) << (5)) | ((b) >> (32 - (5)))) + (((c) & ((d) | (e))) | ((d) & (e))) + (Sha1ExpandWord(i + 1, w)) +
             (0x8f1bbcdc);
        c = (((c) << (30)) | ((c) >> (32 - (30))));
        i += 2;
    }
    for (j = 0; j < 4; j++) {
        e += (((a) << (5)) | ((a) >> (32 - (5)))) + ((b) ^ (c) ^ (d)) + (Sha1ExpandWord(i, w)) + (0xca62c1d6);
        b = (((b) << (30)) | ((b) >> (32 - (30))));
        d += (((e) << (5)) | ((e) >> (32 - (5)))) + ((a) ^ (b) ^ (c)) + (Sha1ExpandWord(i + 1, w)) + (0xca62c1d6);
        a = (((a) << (30)) | ((a) >> (32 - (30))));
        c += (((d) << (5)) | ((d) >> (32 - (5)))) + ((e) ^ (a) ^ (b)) + (Sha1ExpandWord(i + 2, w)) + (0xca62c1d6);
        e = (((e) << (30)) | ((e) >> (32 - (30))));
        b += (((c) << (5)) | ((c) >> (32 - (5)))) + ((d) ^ (e) ^ (a)) + (Sha1ExpandWord(i + 3, w)) + (0xca62c1d6);
        d = (((d) << (30)) | ((d) >> (32 - (30))));
        i = (i + 4) & 0xf;
        a += (((b) << (5)) | ((b) >> (32 - (5)))) + ((c) ^ (d) ^ (e)) + (Sha1ExpandWord(i, w)) + (0xca62c1d6);
        c = (((c) << (30)) | ((c) >> (32 - (30))));
        i += 1;
    }

    ctx->state[0] += a;
    ctx->state[1] += b;
    ctx->state[2] += c;
    ctx->state[3] += d;
    ctx->state[4] += e;
}
