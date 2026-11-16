/* compiler: 2.0/sp1p5  */
/* raise from projets/lego-star-wars-ii-the-original-trilogy/src/auto/raise.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
extern s32 func_0208494c(void *);
extern void func_02084830(void *);
extern void func_020848b4(void *);
extern void func_02000d50(s32);
extern M2C_UNK data_0209fdd0;
extern M2C_UNK data_020d8624;
extern M2C_UNK data_0209fce0;
typedef struct {
    u32 pad[7];
    s32 f1c;
} Cs;
extern Cs data_0209fd04;
extern void (*data_020a0100[])(s32);
s32 func_020033f8(s32 sig) {
    void (*handler)(s32);
    s32 idx;

    if (sig < 1 || sig > 7) {
        return -1;
    }
    if (func_0208494c(&data_0209fdd0) == 0) {
        (*(s32 *) ((s8 *) (&data_0209fce0) + (0x1c))) =
            (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_020d8624) + (0x4)))) + (0x6c)));
        data_0209fd04.f1c = 1;
    } else {
        if ((*(s32 *) ((s8 *) (&data_0209fce0) + (0x1c))) ==
            (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_020d8624) + (0x4)))) + (0x6c)))) {
            data_0209fd04.f1c = data_0209fd04.f1c + 1;
        } else {
            func_02084830(&data_0209fdd0);
            (*(s32 *) ((s8 *) (&data_0209fce0) + (0x1c))) =
                (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_020d8624) + (0x4)))) + (0x6c)));
            data_0209fd04.f1c = 1;
        }
    }
    idx     = sig - 1;
    handler = data_020a0100[idx];
    if (handler != (void (*)(s32)) 1) {
        data_020a0100[idx] = 0;
    }
    if (--data_0209fd04.f1c == 0) {
        func_020848b4(&data_0209fdd0);
    }
    if (handler == (void (*)(s32)) 1 || (handler == 0 && sig == 1)) {
        return 0;
    }
    if (handler == 0) {
        func_02000d50(0);
    }
    handler(sig);
    return 0;
}
