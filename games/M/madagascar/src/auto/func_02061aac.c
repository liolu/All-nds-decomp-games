/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_0205f8cc();
extern void func_02061aac();
extern u32 data_020db72c;
extern u32 data_020db740;
extern u32 data_020db73c;
extern s32 data_020db738;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020bb1bc[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02061aac() {
    u32 temp      = func_0205f8cc();
    data_020db738 = (s32) temp;
    data_020db72c = (u32) (data_020bb1bc[temp].blk1 << 0xC);
    data_020db73c = (u32) (data_020bb1bc[temp].blk2 << 0xC);
    data_020db740 = (u32) (data_020bb1bc[temp].szBlk1 << 0xC);
}
