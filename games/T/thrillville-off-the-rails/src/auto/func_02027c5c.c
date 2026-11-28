/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_02027f60(void);
extern void func_02027830(int param);
extern void func_02027500(int a, int b, int c, int d);
extern volatile int data_020ee324;
extern int data_020ee328;
int func_02027c5c(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_02027f60()) {
        return 1;
    }
    data_020ee324 = 0;
    func_02027830(0x3006000);
    p = &data_020ee324;
    while (!*p) {
    }
    *p            = 0;
    data_020ee328 = 0;
    func_02027500(0, 2, 0, 0);
    func_02027830((a & 0xff) | 0x2006100);
    func_02027830((b & 0xffff) | 0x1010000);
    return 0;
}
