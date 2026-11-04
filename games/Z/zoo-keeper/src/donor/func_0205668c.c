/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02068680 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02068680.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0204a950(unsigned short val, char *dst, int nbytes);
extern int func_020565d8(int a, void *b, int flag);
extern void func_0204a9b0(unsigned val, void *dst, int len);
extern void func_0204a968(int a, void *dst, int n);
extern int func_02056520(int p);
struct Src {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    unsigned char f18;
};
void func_0205668c(char *dst, struct Src *src, int flag) {
    volatile unsigned short tmp;
    volatile int z;
    tmp = 0;
    func_0204a950(tmp, dst, 0x4b8);
    *(unsigned char *) (dst + 0x4aa) = 0;
    if (func_020565d8(src->fc, dst, 1) == 0 | func_020565d8(src->f10, dst, 0) == 0) {
        *(unsigned char *) (dst + 0x4aa) = 1;
        z                                = 0;
        func_0204a9b0(z, dst, 0x220);
    }
    *(int *) (dst + 0x4b0) = src->f14;
    if (flag) {
        func_0204a968(flag, dst + 0x220, 0x16);
    }
    *(unsigned char *) (dst + 0x236) = src->f18;
    func_0204a968(src->f4, dst + 0x238, (unsigned) (func_02056520(src->f4) << 0x11) >> 0x10);
    func_0204a968(src->f8, dst + 0x298, (unsigned) (func_02056520(src->f8) << 0x11) >> 0x10);
    *(unsigned char *) (dst + 0x358) = 1;
    *(short *) (dst + 0x35a)         = 1;
    *(short *) (dst + 0x4a8)         = 1;
}
