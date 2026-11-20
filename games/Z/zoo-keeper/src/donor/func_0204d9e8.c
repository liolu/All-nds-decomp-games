/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e3d4 from projets/need-for-speed-underground-2/src/donor/func_0205e3d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int func_0204d13c(void *self, int a);
extern int func_0204d780(void *self);
int func_0204d9e8(char *self, int a1, int a2, int a3) {
    int n;
    int a3v;
    int oldpos;
    oldpos = *((int *) (self + 0x28));
    n      = (int) (((long long) a2));
    a3v    = (int) (((long long) a3));
    {
        int avail = (*((int *) (self + 0x24))) - oldpos;
        if (n > avail) {
            n = avail;
        }
    }
    *((int *) (self + 0x2c)) = a1;
    if (n < 0) {
        n = 0;
    }
    *((int *) (self + 0x30)) = a2;
    *((int *) (self + 0x34)) = n;
    if (a3v == 0) {
        *((int *) (((long long) ((int) (self + 0xc))))) |= 4;
    }
    func_0204d13c(self, 0);
    if (a3v == 0) {
        if (func_0204d780(self)) {
            n = (*((int *) (self + 0x28))) - oldpos;
        } else {
            n = -1;
        }
    }
    return n;
}
