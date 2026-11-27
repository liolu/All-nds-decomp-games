/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206e98c from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0206e98c.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
extern int func_020a1184(void *a0, unsigned short *out0, unsigned int *out1);
int func_020a32d8(void *a0, void *dst) {
    unsigned short t0;
    unsigned int t1;
    int result = func_020a1184(a0, &t0, &t1);
    if (result >= 0) {
        *(unsigned short *) ((char *) dst + 0x2) = ((t0 >> 8) & 0xff) | ((t0 << 8) & 0xff00);
        *(unsigned int *) ((char *) dst + 0x4) =
            ((t1 >> 24) & 0xff) | ((t1 >> 8) & 0xff00) | ((t1 << 8) & 0xff0000) | ((t1 << 24) & 0xff000000);
    }
    return result;
}
