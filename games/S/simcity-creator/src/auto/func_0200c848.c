/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_SetLCDPower from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_SetLCDPower.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200c364(int param_1);
extern int func_0200c310(int, void *, void *);
extern int func_0200c51c(int value);
extern struct {
    char _0[0x10];
    int field_10;
    int field_14;
} data_020d2cac;
int func_0200c848(int mode, int chan, int useTimeout, int useRoute) {
    volatile unsigned short *reg_powcnt1 = (volatile unsigned short *) 0x04000304;

    if (mode != 0) {
        if (mode == 1) {
            if (useTimeout == 0) {
                if ((unsigned int) (*(int *) 0x027ffc3c - data_020d2cac.field_10) <= 7) {
                    return 0;
                }
            }

            if (chan != 0) {
                if (useRoute != 0) {
                    func_0200c364(chan);
                } else {
                    func_0200c310(chan, 0, 0);
                }
            }
            *reg_powcnt1 |= 1;
            func_0200c51c(data_020d2cac.field_14);
        }
    } else {
        func_0200c51c(0);
        *reg_powcnt1 &= ~1;
        data_020d2cac.field_10 = *(int *) 0x027ffc3c;
        if (chan != 0) {
            if (useRoute != 0) {
                func_0200c364(chan);
            } else {
                func_0200c310(chan, 0, 0);
            }
        }
    }
    return 1;
}
