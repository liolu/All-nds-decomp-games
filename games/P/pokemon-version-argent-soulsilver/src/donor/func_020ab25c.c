/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02074d70 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02074d70.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
extern int func_020aa6e0(void *self);
extern int func_020aaa20(void *self);
extern void func_020a9ad8(int a);
extern void func_020aac80(void *self);
extern int func_020ab22c(void *self);
int func_020ab25c(void *self) {
    if (func_020aa6e0(self) != 1) {
        return 1;
    }
    if (func_020aaa20(self) != 0) {
        func_020a9ad8(*(int *) ((char *) self + 0xc));
        func_020aac80(self);
        if (func_020ab22c(self) != 0) {
            return 1;
        }
    } else {
        if (func_020aa6e0(self) != 5) {
            return 1;
        }
        if (func_020ab22c(self) != 0) {
            return 1;
        }
        func_020aac80(self);
    }
    return 0;
}
