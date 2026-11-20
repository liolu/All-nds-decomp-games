/* compiler: 2.0/sp1p5  */
/* __exit from projets/blue-dragon-awakened-shadow/src/auto/__exit.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern s32 func_0201d3f8(void *);
extern void func_0201d524(void *);
extern void func_0201d4b4(void *);
extern void func_020254b4(s32);
extern void func_02027584(void);
extern u8 data_0203dd68[];
extern u8 data_02040cd0[];
extern void (*data_02040ce0[])(void);
extern s32 data_02040de0;
extern s32 data_02040e04;
extern u8 data_02040e28[];
void func_02025268(void) {
    s32 t;
    if (func_0201d3f8(data_02040e28) == 0) {
        data_02040de0 = *(s32 *) (*(u8 **) (data_0203dd68 + 4) + 0x6C);
        data_02040e04 = 1;
    } else if (data_02040de0 == *(s32 *) (*(u8 **) (data_0203dd68 + 4) + 0x6C)) {
        data_02040e04 += 1;
    } else {
        func_0201d524(data_02040e28);
        data_02040de0 = *(s32 *) (*(u8 **) (data_0203dd68 + 4) + 0x6C);
        data_02040e04 = 1;
    }
    if (*(volatile s32 *) (data_02040cd0 + 8) > 0) {
        do {
            t                                     = *(volatile s32 *) (data_02040cd0 + 8) - 1;
            *(volatile s32 *) (data_02040cd0 + 8) = t;
            data_02040ce0[t]();
        } while (*(volatile s32 *) (data_02040cd0 + 8) > 0);
    }
    t             = data_02040e04 - 1;
    data_02040e04 = t;
    if (t == 0) {
        func_0201d4b4(data_02040e28);
    }
    if (*(void (**)(void)) data_02040cd0 != 0) {
        (*(void (**)(void)) data_02040cd0)();
        *(void (**)(void)) data_02040cd0 = 0;
    }
    func_020254b4(0);
    func_02027584();
}
