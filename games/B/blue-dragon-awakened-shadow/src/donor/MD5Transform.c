/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_md5_block from https://github.com/Project-Holon/aletheia src/game/ov009/md5.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct CPSMd5Ctx {
    u32 state[4];
    u32 count[2];
    unsigned char buffer[64];
} CPSMd5Ctx;
extern void func_0203f98c(void *a, void *b, int n);
extern void MD5Transform(CPSMd5Ctx *ctx, unsigned char *m);
extern unsigned long data_020f904c[64];
extern unsigned char data_020f8fcc[64];
void func_0203f98c(void *a, void *b, int n);
void MD5Transform(CPSMd5Ctx *ctx, unsigned char *m) {
    unsigned long x[16];
    unsigned long a, b, c, d;
    int i, j;

    a = ctx->state[0];
    b = ctx->state[1];
    c = ctx->state[2];
    d = ctx->state[3];
    func_0203f98c(x, m, 64);

    i = 0;
    for (j = 0; j < 4; j++) {
        a += ((d) ^ ((b) & ((c) ^ (d)))) + x[data_020f8fcc[i]] + data_020f904c[i];
        a = (((a) << (7)) | ((a) >> (32 - (7)))) + b;
        d += ((c) ^ ((a) & ((b) ^ (c)))) + x[data_020f8fcc[i + 1]] + data_020f904c[i + 1];
        d = (((d) << (12)) | ((d) >> (32 - (12)))) + a;
        c += ((b) ^ ((d) & ((a) ^ (b)))) + x[data_020f8fcc[i + 2]] + data_020f904c[i + 2];
        c = (((c) << (17)) | ((c) >> (32 - (17)))) + d;
        b += ((a) ^ ((c) & ((d) ^ (a)))) + x[data_020f8fcc[i + 3]] + data_020f904c[i + 3];
        b = (((b) << (22)) | ((b) >> (32 - (22)))) + c;
        i += 4;
    }
    for (j = 0; j < 4; j++) {
        a += ((c) ^ ((d) & ((b) ^ (c)))) + x[data_020f8fcc[i]] + data_020f904c[i];
        a = (((a) << (5)) | ((a) >> (32 - (5)))) + b;
        d += ((b) ^ ((c) & ((a) ^ (b)))) + x[data_020f8fcc[i + 1]] + data_020f904c[i + 1];
        d = (((d) << (9)) | ((d) >> (32 - (9)))) + a;
        c += ((a) ^ ((b) & ((d) ^ (a)))) + x[data_020f8fcc[i + 2]] + data_020f904c[i + 2];
        c = (((c) << (14)) | ((c) >> (32 - (14)))) + d;
        b += ((d) ^ ((a) & ((c) ^ (d)))) + x[data_020f8fcc[i + 3]] + data_020f904c[i + 3];
        b = (((b) << (20)) | ((b) >> (32 - (20)))) + c;
        i += 4;
    }
    for (j = 0; j < 4; j++) {
        a += ((b) ^ (c) ^ (d)) + x[data_020f8fcc[i]] + data_020f904c[i];
        a = (((a) << (4)) | ((a) >> (32 - (4)))) + b;
        d += ((a) ^ (b) ^ (c)) + x[data_020f8fcc[i + 1]] + data_020f904c[i + 1];
        d = (((d) << (11)) | ((d) >> (32 - (11)))) + a;
        c += ((d) ^ (a) ^ (b)) + x[data_020f8fcc[i + 2]] + data_020f904c[i + 2];
        c = (((c) << (16)) | ((c) >> (32 - (16)))) + d;
        b += ((c) ^ (d) ^ (a)) + x[data_020f8fcc[i + 3]] + data_020f904c[i + 3];
        b = (((b) << (23)) | ((b) >> (32 - (23)))) + c;
        i += 4;
    }
    for (j = 0; j < 4; j++) {
        a += ((c) ^ ((b) | ~(d))) + x[data_020f8fcc[i]] + data_020f904c[i];
        a = (((a) << (6)) | ((a) >> (32 - (6)))) + b;
        d += ((b) ^ ((a) | ~(c))) + x[data_020f8fcc[i + 1]] + data_020f904c[i + 1];
        d = (((d) << (10)) | ((d) >> (32 - (10)))) + a;
        c += ((a) ^ ((d) | ~(b))) + x[data_020f8fcc[i + 2]] + data_020f904c[i + 2];
        c = (((c) << (15)) | ((c) >> (32 - (15)))) + d;
        b += ((d) ^ ((c) | ~(a))) + x[data_020f8fcc[i + 3]] + data_020f904c[i + 3];
        b = (((b) << (21)) | ((b) >> (32 - (21)))) + c;
        i += 4;
    }

    ctx->state[0] += a;
    ctx->state[1] += b;
    ctx->state[2] += c;
    ctx->state[3] += d;
}
