/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e190 from projets/children-of-mana/src/auto/func_0205e190.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern int func_0206018c(void);
extern void func_0205fb1c(int param);
extern void func_0205f800(int a, int b, int c, int d);
extern volatile int data_0217cd04;
extern int data_0217cd08;
int func_0205feb0(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_0206018c()) {
        return 1;
    }
    data_0217cd04 = 0;
    func_0205fb1c(0x3006000);
    p = &data_0217cd04;
    while (!*p) {
    }
    *p            = 0;
    data_0217cd08 = 0;
    func_0205f800(0, 2, 0, 0);
    func_0205fb1c((a & 0xff) | 0x2006100);
    func_0205fb1c((b & 0xffff) | 0x1010000);
    return 0;
}
