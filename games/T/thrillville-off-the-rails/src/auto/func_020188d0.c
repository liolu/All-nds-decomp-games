/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020155d8();
extern void func_020188d0();
extern u32 data_020ec0dc;
extern u32 data_020ec0f4;
extern u32 data_020ec0f0;
extern s32 data_020ec0ec;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020de13c[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_020188d0() {
    u32 temp      = func_020155d8();
    data_020ec0ec = (s32) temp;
    data_020ec0dc = (u32) (data_020de13c[temp].blk1 << 0xC);
    data_020ec0f0 = (u32) (data_020de13c[temp].blk2 << 0xC);
    data_020ec0f4 = (u32) (data_020de13c[temp].szBlk1 << 0xC);
}
