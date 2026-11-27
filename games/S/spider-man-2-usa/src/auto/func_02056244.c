/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02054af4();
extern void func_02056244();
extern u32 data_0216125c;
extern u32 data_02161270;
extern u32 data_0216126c;
extern s32 data_02161268;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020ff77c[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02056244() {
    u32 temp      = func_02054af4();
    data_02161268 = (s32) temp;
    data_0216125c = (u32) (data_020ff77c[temp].blk1 << 0xC);
    data_0216126c = (u32) (data_020ff77c[temp].blk2 << 0xC);
    data_02161270 = (u32) (data_020ff77c[temp].szBlk1 << 0xC);
}
