/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099bf8 from projets/pokemon-dash/src/donor/func_02099bf8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int data_020a2c94;
extern void func_020578f4(void);
extern void func_0205b77c(int a0, int a1, int a2, int a3);
extern void func_0205b834(int val, int *dst, int len);
void func_02057798(void) {
    *(volatile unsigned short *) 0x4000304 |= 0x8000;
    *(volatile unsigned short *) 0x4000304 = (*(volatile unsigned short *) 0x4000304 & 0xfffffdf1) | 0x20e;
    *(volatile unsigned short *) 0x4000304 |= 1;

    func_020578f4();

    *(volatile unsigned short *) 0x4000004 = 0;
    *(volatile int *) 0x4000000            = 0;

    if ((&data_020a2c94)[0] != -1) {
        func_0205b77c((&data_020a2c94)[0], 0x4000008, 0, 0x60);
        *(volatile unsigned short *) 0x400006c = 0;
        func_0205b77c((&data_020a2c94)[0], 0x4001000, 0, 0x70);
    } else {
        volatile int a = 0;
        volatile int b;
        func_0205b834(a, (int *) 0x4000008, 0x60);
        *(volatile unsigned short *) 0x400006c = 0;
        b                                      = 0;
        func_0205b834(b, (int *) 0x4001000, 0x70);
    }

    *(volatile unsigned short *) 0x4000020 = 0x100;
    *(volatile unsigned short *) 0x4000026 = 0x100;
    *(volatile unsigned short *) 0x4000030 = 0x100;
    *(volatile unsigned short *) 0x4000036 = 0x100;
    *(volatile unsigned short *) 0x4001020 = 0x100;
    *(volatile unsigned short *) 0x4001026 = 0x100;
    *(volatile unsigned short *) 0x4001030 = 0x100;
    *(volatile unsigned short *) 0x4001036 = 0x100;
}
