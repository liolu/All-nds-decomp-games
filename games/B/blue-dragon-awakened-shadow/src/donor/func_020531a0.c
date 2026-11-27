/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204fa7c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0204fa7c.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *func_02059234(void);
extern void func_02053358(void);
typedef struct {
    unsigned char pad[0x24];
    int a[32];
    unsigned short b[40];
    int c[71];
    int d[32];
    unsigned short e[32];
    unsigned char f[32];
    unsigned int mask;
} State;
int func_020531a0(int index, int count) {
    int result;
    int i;
    if (!func_02059234()) {
        return 0;
    }
    result = ((State *) func_02059234())->c[index];
    ((State *) func_02059234())->mask &= ~(1 << ((State *) func_02059234())->f[index]);
    func_02053358();
    if (index < count - 1) {
        for (i = 0; i < count - index - 1; i++) {
            ((State *) func_02059234())->a[index + i] = ((State *) func_02059234())->a[index + i + 1];
            ((State *) func_02059234())->b[index + i] = ((State *) func_02059234())->b[index + i + 1];
            ((State *) func_02059234())->c[index + i] = ((State *) func_02059234())->c[index + i + 1];
            ((State *) func_02059234())->d[index + i] = ((State *) func_02059234())->d[index + i + 1];
            ((State *) func_02059234())->e[index + i] = ((State *) func_02059234())->e[index + i + 1];
            ((State *) func_02059234())->f[index + i] = ((State *) func_02059234())->f[index + i + 1];
        }
    }
    if (count > 0) {
        ((State *) func_02059234())->a[count - 1] = 0;
        ((State *) func_02059234())->b[count - 1] = 0;
        ((State *) func_02059234())->c[count - 1] = 0;
        ((State *) func_02059234())->d[count - 1] = 0;
        ((State *) func_02059234())->e[count - 1] = 0;
        ((State *) func_02059234())->f[count - 1] = 0;
    }
    return result;
}
