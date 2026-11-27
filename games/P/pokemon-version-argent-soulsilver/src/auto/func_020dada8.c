/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_CallCallbackAndUnlock from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_CallCallbackAndUnlock.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
extern int data_021e372c[];
void func_020dada8(int a) {
    int flag             = data_021e372c[7];
    void (*fn)(int, int) = (void (*)(int, int)) data_021e372c[8];
    int arg              = data_021e372c[9];
    if (flag != 0) {
        data_021e372c[7] = 0;
    }
    if (fn == 0) {
        return;
    }
    data_021e372c[8] = 0;
    fn(a, arg);
}
