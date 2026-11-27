/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204b850 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204b850.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *func_02059234(void);
extern void func_020540d0(int a, int b, int c, int d, int *e, int f);
extern int func_02055940(void);
extern long long OS_GetTick(void);
int func_020572f0(int a0, int a1) {
    int extra;
    int flag;
    if (a1 == 13) {
        extra = *(int *) ((char *) func_02059234() + 0x20c);
        flag  = 1;
    } else {
        flag = 0;
    }
    func_020540d0(a1, a0, 0, 0, &extra, flag);
    if (func_02055940() != 0) {
        return 0;
    }
    {
        char *h              = (char *) func_02059234();
        long long v          = OS_GetTick();
        *(int *) (h + 0x1e8) = (int) v;
        *(int *) (h + 0x1ec) = (int) (v >> 32);
    }
    return 1;
}
