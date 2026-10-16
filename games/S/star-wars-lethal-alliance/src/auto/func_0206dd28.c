/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_0206e02c(void);
extern void func_0206d810(int param);
extern void func_0206d4e0(int a, int b, int c, int d);
extern volatile int data_020e8350;
extern int data_020e8354;
int func_0206dd28(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_0206e02c()) {
        return 1;
    }
    data_020e8350 = 0;
    func_0206d810(0x3006000);
    p = &data_020e8350;
    while (!*p) {
    }
    *p            = 0;
    data_020e8354 = 0;
    func_0206d4e0(0, 2, 0, 0);
    func_0206d810((a & 0xff) | 0x2006100);
    func_0206d810((b & 0xffff) | 0x1010000);
    return 0;
}
