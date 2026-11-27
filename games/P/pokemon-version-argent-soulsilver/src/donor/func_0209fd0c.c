/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020534d0 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_020534d0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0209fd28(int a, int b, int c, void *d);
typedef struct {
    char _pad[0x24];
    int f_24;
} state_02053544_t;
int func_0209fd0c(state_02053544_t *p, int b, int c) {
    return func_0209fd28(b, c, p->f_24, p);
}
