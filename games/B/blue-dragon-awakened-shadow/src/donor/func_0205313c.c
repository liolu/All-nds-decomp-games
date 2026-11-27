/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204fc38 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204fc38.c (license: MIT), reused by
 * tools/donor_match.py */
typedef struct {
    char _pad0[0xf4];
    int ids[1];
} Ctx;
extern void *func_02059234(void);
extern void func_020531a0(int index, int count);
int func_0205313c(int key, int count) {
    int i;
    if (func_02059234() == 0) {
        return 0;
    }
    for (i = 0; i < count; i++) {
        if (key == ((Ctx *) func_02059234())->ids[i]) {
            func_020531a0(i, count);
            return 1;
        }
    }
    return 0;
}
