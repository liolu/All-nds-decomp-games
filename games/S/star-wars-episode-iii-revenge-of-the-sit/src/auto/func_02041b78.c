/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02040554();
extern void func_02041b78();
extern u32 data_020afe44;
extern u32 data_020afe50;
extern u32 data_020afe4c;
extern s32 data_020afe48;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_0209eea4[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02041b78() {
    u32 temp      = func_02040554();
    data_020afe48 = (s32) temp;
    data_020afe44 = (u32) (data_0209eea4[temp].blk1 << 0xC);
    data_020afe4c = (u32) (data_0209eea4[temp].blk2 << 0xC);
    data_020afe50 = (u32) (data_0209eea4[temp].szBlk1 << 0xC);
}
