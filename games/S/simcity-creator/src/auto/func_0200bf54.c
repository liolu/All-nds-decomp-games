/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_CallCallbackAndUnlock from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_CallCallbackAndUnlock.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
extern int data_020d2cac[];
void func_0200bf54(int a) {
    int flag             = data_020d2cac[7];
    void (*fn)(int, int) = (void (*)(int, int)) data_020d2cac[8];
    int arg              = data_020d2cac[9];
    if (flag != 0) {
        data_020d2cac[7] = 0;
    }
    if (fn == 0) {
        return;
    }
    data_020d2cac[8] = 0;
    fn(a, arg);
}
