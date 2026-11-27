/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204cc20 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204cc20.c (license: MIT), reused by
 * tools/donor_match.py */
extern void *func_02059234(void);
extern void func_02059244(int x);
extern int func_020572f0(int a0, int a1);
extern int func_02056db4(int a0);
extern void func_02056cc0(void);
extern void func_02056bc0(int a);
extern int func_02055b28(int a, int b, int c);
extern void NNCancel(int unused0);
typedef struct Mgr Mgr;
extern void func_02071c70(Mgr *m);
extern long long OS_GetTick(void);
typedef struct {
    char pad[0xf4];
    int entries[32];
} EntryCtx;
int func_02055f1c(int a0) {
    int flag;
    char *p;
    int i;
    if ((*(unsigned char *) ((char *) func_02059234() + (0x17))) != 0 &&
        (*(int *) ((char *) func_02059234() + (0x20))) == (*(int *) ((char *) func_02059234() + (0x200)))) {
        flag = 0;
    } else {
        flag = 1;
    }
    if (flag != 0) {
        (*(unsigned char *) ((char *) func_02059234() + (0x17))) = 0;
        (*(int *) ((char *) func_02059234() + (0x20)))           = 0;
        func_02071c70(*(Mgr **) ((char *) func_02059234() + 0x10));
    }
    if ((*(unsigned char *) ((char *) func_02059234() + (0xd))) < 31) {
        p                                                                                       = func_02059234();
        *(int *) (p + ((*(unsigned char *) ((char *) func_02059234() + (0xd))) + 1) * 4 + 0xf4) = 0;
    }
    (*(unsigned char *) ((char *) func_02059234() + (0x3cc))) = 0xff;
    if ((*(int *) ((char *) func_02059234() + (0x19c))) != 0) {
        NNCancel((*(int *) ((char *) func_02059234() + (0x19c))));
        (*(int *) ((char *) func_02059234() + (0x19c))) = 0;
    }
    p                                               = func_02059234();
    *(unsigned char *) (p + 0x14)                   = (*(unsigned char *) ((char *) func_02059234() + (0xd)));
    (*(int *) ((char *) func_02059234() + (0x204))) = 0;
    if (flag == 0) {
        if ((*(unsigned char *) ((char *) func_02059234() + (0x15))) != 3) {
            func_02056cc0();
        }
    } else if ((*(unsigned char *) ((char *) func_02059234() + (0x15))) == 0) {
        long long time;
        func_02059244(3);
        (*(int *) ((char *) func_02059234() + (0xe8))) = 2;
        p                                              = func_02059234();
        time                                           = OS_GetTick();
        *(int *) (p + 0xec)                            = (int) time;
        *(int *) (p + 0xf0)                            = (int) (time >> 32);
    } else if ((*(unsigned char *) ((char *) func_02059234() + (0x15))) == 1) {
        func_02059244(4);
        func_02055b28(1, 0, 0);
    } else if ((*(unsigned char *) ((char *) func_02059234() + (0x15))) == 2) {
        func_02059244(14);
        (*(int *) ((char *) func_02059234() + (0x1d8)))        = 0;
        *(unsigned short *) ((char *) func_02059234() + 0x1b2) = 0;
        func_02056db4(a0);
        for (i = 1; i <= (*(unsigned char *) ((char *) func_02059234() + (0xd))); i++) {
            if (func_020572f0(((EntryCtx *) func_02059234())->entries[i], 13) == 0) {
                return 0;
            }
        }
        if ((*(unsigned char *) ((char *) func_02059234() + (0xd))) == 0) {
            func_02056bc0(2);
        }
    }
    return 1;
}
