/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_StreamRead from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_StreamRead.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_0200aa78(int file);
extern int func_0200ab58(int file, int pos, int whence);
extern int func_0200ab48(int file, void *dst, unsigned int len);
int func_020d7268(int cur, void *dst, unsigned int len) {
    if (*(unsigned char *) (cur + 0x10) == 1) {
        func_0200aa78(*(int *) (cur + 0xc));
        func_0200ab58(*(int *) (cur + 0xc), *(int *) (cur + 8), 0);
        *(unsigned char *) (cur + 0x10) = 0;
    }
    if (func_0200ab48(*(int *) (cur + 0xc), dst, len) == -1) {
        return 0;
    }
    *(int *) (cur + 8) += len;
    return 1;
}
