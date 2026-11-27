/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_sha1_calc from https://github.com/Project-Holon/aletheia src/game/ov009/sha1.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct CPSSha1Ctx {
    u32 state[5];
    u32 count[2];
    unsigned char buffer[64];
} CPSSha1Ctx;
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern void func_0203fff8(CPSSha1Ctx *ctx, u8 *m);
extern void SHA1Update(CPSSha1Ctx *ctx, void *data0, int datalen);
void func_0203fff8(CPSSha1Ctx *ctx, u8 *m);
void SHA1Update(CPSSha1Ctx *ctx, void *data0, int datalen) {
    unsigned char *data = data0;
    unsigned int index, room, i;

    index = (ctx->count[1] >> 3) & 0x3f;
    if ((ctx->count[1] += datalen << 3) < (unsigned int) (datalen << 3)) {
        ctx->count[0]++;
    }
    ctx->count[0] += (unsigned int) datalen >> 29;
    room = 64 - index;

    if ((unsigned int) datalen >= room) {
        MI_CpuCopy8(data, ctx->buffer + index, room);
        index = 0;
        func_0203fff8(ctx, ctx->buffer);
        for (i = room; i + 63 < (unsigned int) datalen; i += 64) {
            func_0203fff8(ctx, data + i);
        }
    } else {
        i = 0;
    }
    MI_CpuCopy8(data + i, ctx->buffer + index, datalen - i);
}
