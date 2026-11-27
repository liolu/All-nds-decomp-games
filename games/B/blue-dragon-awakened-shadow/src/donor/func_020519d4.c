/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205121c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0205121c.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *func_02059234(void);
extern void func_02053980(int param0, int param1, int param2, int param3);
extern void func_02059244(int x);
extern int func_02057fa8(int code);
extern int func_020503c0(int id, char *a, char *b);
extern int func_02057f34(int r4);
extern int func_02051790(int x);
extern int func_0205596c(int x, int y);
extern int func_02055940(int a0);
typedef struct Obj Obj;
extern Obj *func_02074fe4(void *self, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8);
extern void func_02058284(int a0, int a1, int a2);
extern char data_020fa78c[];
void func_020519d4(int a0, int a1, int a2, int a3, int a4) {
    func_02053980(3, 0, a1, a2);
    (*(int *) ((char *) func_02059234() + (0x46c))) = a3;
    (*(int *) ((char *) func_02059234() + (0x470))) = a4;
    *((char *) func_02059234() + 0x17)              = 1;
    (*(int *) ((char *) func_02059234() + (0x20)))  = (*(int *) ((char *) func_02059234() + (0x200)));
    (*(int *) ((char *) func_02059234() + (0xf4)))  = a0;
    func_02059244(4);
    if ((*(int *) ((char *) func_02059234() + (0xe4))) == 0) {
        (*(int *) ((char *) func_02059234() + (0xe4))) =
            (int) func_02074fe4(*(void **) ((char *) func_02059234() + 0x2f4), (*(int *) ((char *) func_02059234() + (0x2f4))),
                                (*(int *) ((char *) func_02059234() + (0x2f8))), 0, 20, 1, 0, (int) func_02058284, 0);
    }
    if ((*(int *) ((char *) func_02059234() + (0xe4))) == 0) {
        if (func_02057fa8(5) != 0) {
            return;
        }
    }
    if (func_02057f34(func_020503c0(5, data_020fa78c, 0)) != 0) {
        return;
    }
    if ((*(int *) ((char *) func_02059234() + (0x10))) == 0) {
        if (func_02051790((*(int *) ((char *) func_02059234() + (0x200)))) != 0) {
            return;
        }
    }
    if (func_02055940(func_0205596c((*(int *) ((char *) func_02059234() + (0xf4))), 0)) != 0) {
        return;
    }
}
