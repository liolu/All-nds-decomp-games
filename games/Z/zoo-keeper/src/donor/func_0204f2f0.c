/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e190 from projets/children-of-mana/src/auto/func_0205e190.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern int func_0204f5cc(void);
extern void func_0204ef5c(int param);
extern void func_0204ec40(int a, int b, int c, int d);
extern volatile int data_0206d984;
extern int data_0206d988;
int func_0204f2f0(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_0204f5cc()) {
        return 1;
    }
    data_0206d984 = 0;
    func_0204ef5c(0x3006000);
    p = &data_0206d984;
    while (!*p) {
    }
    *p            = 0;
    data_0206d988 = 0;
    func_0204ec40(0, 2, 0, 0);
    func_0204ef5c((a & 0xff) | 0x2006100);
    func_0204ef5c((b & 0xffff) | 0x1010000);
    return 0;
}
