/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e190 from projets/children-of-mana/src/auto/func_0205e190.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern int func_02022e44(void);
extern void func_02022628(int param);
extern void func_020222f8(int a, int b, int c, int d);
extern volatile int data_0203fd70;
extern int data_0203fd74;
int func_02022b40(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_02022e44()) {
        return 1;
    }
    data_0203fd70 = 0;
    func_02022628(0x3006000);
    p = &data_0203fd70;
    while (!*p) {
    }
    *p            = 0;
    data_0203fd74 = 0;
    func_020222f8(0, 2, 0, 0);
    func_02022628((a & 0xff) | 0x2006100);
    func_02022628((b & 0xffff) | 0x1010000);
    return 0;
}
