/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_md5_calc from https://github.com/Project-Holon/aletheia src/game/ov009/md5.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct CPSMd5Ctx {
    u32 state[4];
    u32 count[2];
    unsigned char buffer[64];
} CPSMd5Ctx;
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern void MD5Transform(CPSMd5Ctx *ctx, unsigned char *m);
extern void MD5Update(CPSMd5Ctx *ctx, void *data0, int datalen);
void MD5Transform(CPSMd5Ctx *ctx, unsigned char *m);
void MD5Update(CPSMd5Ctx *ctx, void *data0, int datalen) {
    unsigned char *data = data0;
    unsigned int i, index, room;

    index = (ctx->count[0] >> 3) & 0x3f;
    if ((ctx->count[0] += (unsigned int) datalen << 3) < ((unsigned int) datalen << 3)) {
        ctx->count[1]++;
    }
    ctx->count[1] += (unsigned int) datalen >> 29;
    room = 64 - index;
    if ((unsigned int) datalen >= room) {
        MI_CpuCopy8(data, ctx->buffer + index, room);
        index = 0;
        MD5Transform(ctx, ctx->buffer);
        for (i = room; i + 63 < (unsigned int) datalen; i += 64) {
            MD5Transform(ctx, data + i);
        }
    } else {
        i = 0;
    }
    MI_CpuCopy8(data + i, ctx->buffer + index, datalen - i);
}
