/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02062768();
extern void func_0206400c();
extern u32 data_020e62a0;
extern u32 data_020e62ac;
extern u32 data_020e62a8;
extern s32 data_020e62a4;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020d5638[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_0206400c() {
    u32 temp      = func_02062768();
    data_020e62a4 = (s32) temp;
    data_020e62a0 = (u32) (data_020d5638[temp].blk1 << 0xC);
    data_020e62a8 = (u32) (data_020d5638[temp].blk2 << 0xC);
    data_020e62ac = (u32) (data_020d5638[temp].szBlk1 << 0xC);
}
