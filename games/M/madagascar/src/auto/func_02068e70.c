/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_0206914c(void);
extern void func_02068adc(int param);
extern void func_020687c0(int a, int b, int c, int d);
extern volatile int data_020dd764;
extern int data_020dd768;
int func_02068e70(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_0206914c()) {
        return 1;
    }
    data_020dd764 = 0;
    func_02068adc(0x3006000);
    p = &data_020dd764;
    while (!*p) {
    }
    *p            = 0;
    data_020dd768 = 0;
    func_020687c0(0, 2, 0, 0);
    func_02068adc((a & 0xff) | 0x2006100);
    func_02068adc((b & 0xffff) | 0x1010000);
    return 0;
}
