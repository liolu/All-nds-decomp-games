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
extern void func_020d4a50(const void *srcp, void *dstp, u32 size);
extern void func_020ac0f8(CPSSha1Ctx *ctx, u8 *m);
extern void func_020ac7d4(CPSSha1Ctx *ctx, void *data0, int datalen);
void func_020ac0f8(CPSSha1Ctx *ctx, u8 *m);
void func_020ac7d4(CPSSha1Ctx *ctx, void *data0, int datalen) {
    unsigned char *data = data0;
    unsigned int index, room, i;

    index = (ctx->count[1] >> 3) & 0x3f;
    if ((ctx->count[1] += datalen << 3) < (unsigned int) (datalen << 3)) {
        ctx->count[0]++;
    }
    ctx->count[0] += (unsigned int) datalen >> 29;
    room = 64 - index;

    if ((unsigned int) datalen >= room) {
        func_020d4a50(data, ctx->buffer + index, room);
        index = 0;
        func_020ac0f8(ctx, ctx->buffer);
        for (i = room; i + 63 < (unsigned int) datalen; i += 64) {
            func_020ac0f8(ctx, data + i);
        }
    } else {
        i = 0;
    }
    func_020d4a50(data + i, ctx->buffer + index, datalen - i);
}
