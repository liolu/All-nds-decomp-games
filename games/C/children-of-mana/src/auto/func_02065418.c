/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e828 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0207e828.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_020655f8(void *p);
typedef struct {
    char _pad[0xc];
    int f_c;
} state_0207e910_t;
int func_02065418(state_0207e910_t *p) {
    int r = func_020655f8(p);
    if (r != 0) {
        p->f_c = 0;
    }
    return r;
}
