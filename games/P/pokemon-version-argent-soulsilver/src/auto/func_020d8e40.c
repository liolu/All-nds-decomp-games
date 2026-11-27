/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DGT_Hash1SetSource from https://github.com/Sojews/fossil-fighters-decomp libs/nitrosdk/src/dgt/hash1.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef unsigned long long u64;
extern void func_020d4a50(const void *src, void *dest, u32 size);
typedef struct {
    union {
        struct {
            u32 a, b, c, d;
        };
        u32 state[4];
    };
    u64 length;
    union {
        u32 buffer32[16];
        u8 buffer8[64];
    };
} DGTHash1Context;
extern void func_020d8e40(DGTHash1Context *ctx, const void *input, u32 length);
extern void func_020d8fc0(DGTHash1Context *ctx);
void func_020d8e40(DGTHash1Context *ctx, const void *input, u32 length) {
    int buffer_len = ctx->length % 64;
    ctx->length += length;
    int free_bytes = 64 - buffer_len;
    if (free_bytes > length) {
        if (length > 0) {
            func_020d4a50(input, ctx->buffer8 + buffer_len, length);
        }
    } else {
        func_020d4a50(input, ctx->buffer8 + buffer_len, free_bytes);
        func_020d8fc0(ctx);
        u8 *inputp = (u8 *) input + free_bytes;
        length -= free_bytes;
        for (int blocks = length / 64; blocks > 0; blocks--) {
            func_020d4a50(inputp, ctx->buffer8, 64);
            inputp += 64;
            func_020d8fc0(ctx);
        }
        length %= 64;
        if (length > 0) {
            func_020d4a50(inputp, ctx->buffer8, length);
        }
    }
}
void func_020d8fc0(DGTHash1Context *ctx);
