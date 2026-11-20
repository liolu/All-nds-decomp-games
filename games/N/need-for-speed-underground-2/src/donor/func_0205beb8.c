/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206387c from projets/nintendogs-shiba-friends/src/auto/func_0206387c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_0205c720(int i);
extern void func_0205bba0(int a, int b, int c, int d, int e);
void func_0205beb8(int a, int b, int c, int d) {
    int i;
    unsigned int mask = (unsigned int) c;
    for (i = 0; i < 8 && mask != 0;) {
        if (mask & 1) {
            func_0205c720(i);
        }
        i++;
        mask >>= 1;
    }
    func_0205bba0(0xa, a, b, c, d);
}
