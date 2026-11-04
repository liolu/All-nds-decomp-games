/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02057a60();
extern void func_020591b4();
extern u32 data_0217ace8;
extern u32 data_0217acfc;
extern u32 data_0217acf8;
extern s32 data_0217acf4;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_0206bd1c[16];
void func_020591b4() {
    u32 temp      = func_02057a60();
    data_0217acf4 = (s32) temp;
    data_0217ace8 = (u32) (data_0206bd1c[temp].blk1 << 0xC);
    data_0217acf8 = (u32) (data_0206bd1c[temp].blk2 << 0xC);
    data_0217acfc = (u32) (data_0206bd1c[temp].szBlk1 << 0xC);
}
