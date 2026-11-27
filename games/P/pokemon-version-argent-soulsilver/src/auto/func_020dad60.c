/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_WaitBusy from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_WaitBusy.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020d3a90(void);
extern void func_020d674c(void);
extern struct {
    char _0[0x1c];
    int field_1c;
} data_021e372c;
extern int data_021e3748;
void func_020dad60(void) {
    int *p = &data_021e3748;
    if (data_021e372c.field_1c == 0) {
        return;
    }
    do {
        if (func_020d3a90() == 0x80) {
            func_020d674c();
        }
    } while (*p != 0);
}
