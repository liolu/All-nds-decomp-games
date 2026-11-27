/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204b0ec from https://github.com/Sojews/fossil-fighters-decomp libs/nitrosdk/src/crypto/rc4.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u32 i, j;
    u32 state[256];
} RC4Context;
void func_020a0500(RC4Context *context, const void *key, u32 keyLength) {
    u32 *state;
    int i, k, j;

    if (keyLength > 16) {
        keyLength = 16;
    }
    context->i = 0;
    context->j = 0;
    state      = context->state;
    for (i = 0; i < 256; i++) {
        state[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < 256; i++) {
        u32 t = state[i];
        j     = (int) (j + (t + ((const u8 *) key)[k])) & 0xFF;
        if (++k == keyLength) {
            k = 0;
        }
        state[i] = state[j];
        state[j] = t;
    }
    for (i = 0; i < 256; i++) {
        state[i] <<= 24;
    }
}
