/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Ov105_RunStep3 from https://github.com/Yokimitsuro/khdays-decomp src/overlays/system/ov105_wireless/Ov105_RunStep3.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
extern void _Z16unkfunc_021210f0i(int state);
extern int func_02061a70(void *fn, void *arg);
extern void _Z16unkfunc_02121100i(int code);
extern void _Z16unkfunc_0212115cPv(void);
extern int data_02129f40;
int _Z16unkfunc_0212111cv(void) {
    int result;

    _Z16unkfunc_021210f0i(3);
    result = func_02061a70((void *) &_Z16unkfunc_0212115cPv, &data_02129f40);
    if (result == 2) {
        return 1;
    }
    _Z16unkfunc_02121100i(result);
    _Z16unkfunc_021210f0i(9);
    return 0;
}
