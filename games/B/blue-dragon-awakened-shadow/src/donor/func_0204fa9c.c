/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02049734 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02049734.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02050b70(int, void *);
extern int DWC_GetCommonValueString(void *, void *, void *, int);
extern unsigned char strtoul(void *, int, int);
extern void strcpy(int, void *);
extern unsigned char data_020fa774;
extern unsigned char data_020fa778;
unsigned char func_0204fa9c(int arg0, char *out1, char *out2, int arg3) {
    unsigned char buf[0x218];

    if (func_02050b70(arg0, buf + 4) != 0) {
        if (*(int *) (buf + 8) == 6) {
            if (out1 != 0) {
                if (DWC_GetCommonValueString(&data_020fa774, buf, buf + 0xc, 0x2f) <= 0) {
                    *out1 = 0;
                } else {
                    *out1 = strtoul(buf, 0, 0xa);
                }
            }
            if (out2 != 0) {
                if (DWC_GetCommonValueString(&data_020fa778, buf, buf + 0xc, 0x2f) <= 0) {
                    *out2 = 0;
                } else {
                    *out2 = strtoul(buf, 0, 0xa);
                }
            }
        } else {
            if (out1 != 0) {
                *out1 = 0;
            }
            if (out2 != 0) {
                *out2 = 0;
            }
        }
        if (arg3 != 0) {
            strcpy(arg3, buf + 0x10c);
        }
        return (unsigned char) *(int *) (buf + 8);
    }
    if (out1 != 0) {
        *out1 = 0;
    }
    if (out2 != 0) {
        *out2 = 0;
    }
    return 0;
}
