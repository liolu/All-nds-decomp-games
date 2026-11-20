/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_WaitBusy from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_WaitBusy.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02006738(void);
extern void func_02008584(void);
extern struct {
    char _0[0x1c];
    int field_1c;
} data_020d2cac;
extern int data_020d2cc8;
void func_0200bf0c(void) {
    int *p = &data_020d2cc8;
    if (data_020d2cac.field_1c == 0) {
        return;
    }
    do {
        if (func_02006738() == 0x80) {
            func_02008584();
        }
    } while (*p != 0);
}
