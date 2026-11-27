/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201f638 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0201f638.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned char data_0212b100[];
extern void _Z16unkfunc_021210f0i(int);
extern void _Z16unkfunc_02121100i(void);
extern int func_02062f20(void *p, int n);
int _Z16unkfunc_02121544v(void) {
    _Z16unkfunc_021210f0i(6);
    if (func_02062f20(data_0212b100, 0xd) == 0) {
        return 1;
    }
    _Z16unkfunc_02121100i();
    return 0;
}
