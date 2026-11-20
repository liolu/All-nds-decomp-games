/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_StreamReadAhead from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_StreamReadAhead.c (license: CC0-1.0), reused by tools/donor_match.py */
extern int func_0200ab58(int file, int pos, int whence);
extern int func_0200ab38(int file, void *dst, unsigned int len);
int func_020d72d8(int cur, void *dst, unsigned int len) {
    int pos            = *(int *) (cur + 8);
    int base           = pos & -0x200;
    int skew           = pos - base;
    unsigned int total = len + skew;

    if (total & 0x1ff) {
        total = (total & -0x200) + 0x200;
    }
    func_0200ab58(*(int *) (cur + 0xc), base, 0);
    if (func_0200ab38(*(int *) (cur + 0xc), dst, total) == -1) {
        return 0;
    }
    *(int *) (cur + 8) += len;
    *(unsigned char *) (cur + 0x10) = 1;
    return skew;
}
