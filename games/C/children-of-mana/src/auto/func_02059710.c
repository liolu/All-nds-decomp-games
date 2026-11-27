/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02056ab0();
extern void func_02059710();
extern u32 data_0211af7c;
extern u32 data_0211af90;
extern u32 data_0211af8c;
extern s32 data_0211af88;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020f97a0[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02059710() {
    u32 temp      = func_02056ab0();
    data_0211af88 = (s32) temp;
    data_0211af7c = (u32) (data_020f97a0[temp].blk1 << 0xC);
    data_0211af8c = (u32) (data_020f97a0[temp].blk2 << 0xC);
    data_0211af90 = (u32) (data_020f97a0[temp].szBlk1 << 0xC);
}
