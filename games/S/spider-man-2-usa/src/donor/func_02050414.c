/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206002c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206002c.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
extern void func_020580e8(unsigned val, int *dst, int len);
extern void func_020574fc(unsigned int a, unsigned int b);
extern void func_02056e04(void *a, void *fn, int c, void *d, int e, int f);
extern void func_02056c9c(void *a);
extern void func_02058544(int a, void *fn);
extern void func_020506a4(void);
extern void func_020506f8(void);
struct S8180 {
    int *ptr;
    int f04;
    int f08;
    int f0c;
    u16 f10;
    u16 pad12;
    int f14;
    int pad18[8];
    int f38;
    int pad3c[38];
    u16 fd4;
    u16 padd6;
};
extern struct S8180 data_021608c0;
extern int data_021608a0[];
extern char data_021608fc;
extern char data_02160ea0;
void func_02050414(void) {
    volatile int local;

    *(volatile int *) &data_021608c0.f08 = ~2;
    *(volatile int *) &data_021608c0.f0c = 0;
    local                                = 0;
    data_021608c0.f14                    = 0;
    data_021608c0.ptr                    = data_021608a0;
    func_020580e8(local, data_021608a0, 0x20);
    func_020574fc((unsigned int) data_021608a0, 0x20);
    data_021608c0.f10 = 0;
    data_021608c0.fd4 = 0;
    data_021608c0.f38 = 4;
    func_02056e04(&data_021608fc, (void *) func_020506a4, 0, &data_02160ea0, 0x400, data_021608c0.f38);
    func_02056c9c(&data_021608fc);
    func_02058544(0xb, (void *) func_020506f8);
}
