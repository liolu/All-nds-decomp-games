/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206a6d0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206a6d0.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned char u8;
extern unsigned int func_020565b4(unsigned int);
extern void func_02051750(int arg0, int *out);
extern void func_02051814(int *out);
extern void func_02057e54(unsigned int channel, void *src, void *dst, unsigned int numHalfs);
extern void func_020517e0(int *self);
extern void func_02051728(int a, int *p);
extern void func_020580d0(int *dst, int *src, int len);
extern void func_02057498(void);
extern void func_020516b4(void *arg);
extern void func_02051cac(int n);
extern int data_021610ec;
extern unsigned short data_021610e8;
extern int data_02161100;
extern int data_02161104;
#pragma opt_strength_reduction off
void func_02051af0(void) {
    int sp[4];
    unsigned int irq;
    int flag;
    u16 save208;
    int i;
    void *arg;

    if (data_021610ec != 0) {
        return;
    }
    data_021610ec = 1;
    if ((*(volatile u16 *) 0x4000300 & 1) == 0) {
        return;
    }
    irq                         = func_020565b4(0x40000);
    save208                     = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = 1;
    func_02051750(*(unsigned short *) ((char *) &data_021610e8 + 2), sp);
    flag = ((int) *(volatile u16 *) 0x4000204 & 0x8000) >> 15;
    func_02051814(sp + 2);
    *(volatile u16 *) 0x4000204 &= ~0x8000;
    func_02057e54(0, (void *) 0x8000080, (void *) ((char *) &data_02161100 + 0x80), 0x40);
    *(volatile u16 *) 0x4000204 = (*(volatile u16 *) 0x4000204 & ~0x8000) | (flag << 15);
    func_020517e0(sp + 2);
    func_02051728(*(unsigned short *) ((char *) &data_021610e8 + 2), sp);
    *(volatile u16 *) 0x27ffc30 = *(u16 *) ((char *) &data_02161100 + 0xbe);
    for (i = 0; i < 3; i++) {

        ((volatile u8 *) 0x27ffc32)[i] = *(u8 *) ((char *) &data_02161100 + i + 0xb5);
    }
    {
        volatile u16 *p6                             = (volatile u16 *) 0x27ffc30;
        p6[3]                                        = *(u16 *) ((char *) &data_02161100 + 0xb0);
        *(volatile unsigned int *) ((char *) p6 + 8) = *(unsigned int *) ((char *) &data_02161100 + 0xac);
    }
    func_020580d0((int *) 0xffff0020, &data_02161104, 0x9c);
    func_02057498();
    arg = (void *) ((((unsigned int) &data_02161100 + 0xfe000000) >> 5) << 6 | 1);
    func_020516b4(arg);
    if (data_021610e8 != 1) {
        do {
            func_02051cac(1);
        } while (data_021610e8 != 1);
    }
    (void) *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = save208;
    func_020565b4(irq);
}
