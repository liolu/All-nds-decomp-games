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
extern s32 func_0208494c(void *);
extern void func_02084830(void *);
extern void func_020848b4(void *);
extern void func_02000fe8(s32);
extern void func_02007a80(void);
extern u8 data_020d8624[];
extern u8 data_0209fbd0[];
extern void (*data_0209fbe0[])(void);
extern s32 data_0209fce0;
extern s32 data_0209fd04;
extern u8 data_0209fd28[];
void func_02000d9c(void) {
    s32 t;
    if (func_0208494c(data_0209fd28) == 0) {
        data_0209fce0 = *(s32 *) (*(u8 **) (data_020d8624 + 4) + 0x6C);
        data_0209fd04 = 1;
    } else if (data_0209fce0 == *(s32 *) (*(u8 **) (data_020d8624 + 4) + 0x6C)) {
        data_0209fd04 += 1;
    } else {
        func_02084830(data_0209fd28);
        data_0209fce0 = *(s32 *) (*(u8 **) (data_020d8624 + 4) + 0x6C);
        data_0209fd04 = 1;
    }
    if (*(volatile s32 *) (data_0209fbd0 + 8) > 0) {
        do {
            t                                     = *(volatile s32 *) (data_0209fbd0 + 8) - 1;
            *(volatile s32 *) (data_0209fbd0 + 8) = t;
            data_0209fbe0[t]();
        } while (*(volatile s32 *) (data_0209fbd0 + 8) > 0);
    }
    t             = data_0209fd04 - 1;
    data_0209fd04 = t;
    if (t == 0) {
        func_020848b4(data_0209fd28);
    }
    if (*(void (**)(void)) data_0209fbd0 != 0) {
        (*(void (**)(void)) data_0209fbd0)();
        *(void (**)(void)) data_0209fbd0 = 0;
    }
    func_02000fe8(0);
    func_02007a80();
}
