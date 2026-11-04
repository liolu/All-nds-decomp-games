/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020663d8 from projets/nintendogs-shiba-friends/src/donor/func_020663d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
extern int *func_02061954(void);
extern int func_02061834(int a, int b, int c);
extern void func_0205a6a0(unsigned int addr, unsigned int n);
extern int func_02061f58(void);
extern int func_02062044(void);
extern void func_02061a80(int i, int val);
extern int func_02061964(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
int func_02062b54(int arg0, int arg1, int arg2, int arg3, u16 arg4, u16 arg5, u16 arg6, int arg7, int arg8, int arg9,
                  int arg10) {
    int *base;
    int r;

    base = func_02061954();
    r    = func_02061834(2, 7, 8);
    if (r != 0) {
        return r;
    }
    func_0205a6a0((unsigned int) (base[1] + 0x10), 4);
    if (((int *) base[1])[4] == 1) {
        return 3;
    }
    if (arg2 < func_02061f58()) {
        return 6;
    }
    if (arg2 & 0x3f) {
        return 6;
    }
    if (arg4 < func_02062044()) {
        return 6;
    }
    if (arg4 & 0x1f) {
        return 6;
    }
    func_02061a80(0xe, arg0);
    r = func_02061964(0xe, 0xa, arg1, (unsigned int) arg2 >> 1, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    if (r == 0) {
        r = 2;
    }
    return r;
}
