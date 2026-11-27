/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02067090();
extern void func_02069034();
extern u32 data_0218462c;
extern u32 data_02184640;
extern u32 data_0218463c;
extern s32 data_02184638;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_0207ea68[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02069034() {
    u32 temp      = func_02067090();
    data_02184638 = (s32) temp;
    data_0218462c = (u32) (data_0207ea68[temp].blk1 << 0xC);
    data_0218463c = (u32) (data_0207ea68[temp].blk2 << 0xC);
    data_02184640 = (u32) (data_0207ea68[temp].szBlk1 << 0xC);
}
