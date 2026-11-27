/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020656d4 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_020656d4.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0205a328(const void *src, void *dst, u32 size);
extern int func_0206078c(void *pkt);
struct Pkt {
    u32 field00;
    char pad04[4];
    u16 field08;
    char pad0a[6];
    u32 field10;
    char data14[9];
    u8 field1d;
    char rest[0xa0 - 0x1e];
};
int func_0206053c(u16 arg0, const void *arg1, s32 arg2, u32 arg3) {
    struct Pkt pkt;
    if (arg2 < 0 || arg2 > 9) {
        return 0;
    }
    pkt.field08 = arg0;
    pkt.field00 = 10;
    pkt.field10 = arg3;
    func_0205a328(arg1, pkt.data14, arg2);
    pkt.field1d = (u8) arg2;
    return func_0206078c(&pkt);
}
