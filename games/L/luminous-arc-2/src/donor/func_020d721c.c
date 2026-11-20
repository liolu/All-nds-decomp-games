/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_StreamSeek from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_StreamSeek.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_0200aa78(int *file, int a, void *b, int c);
extern int func_0200ab58(int file, int pos, int whence);
int func_020d721c(int cur, int pos, void *b, int c) {
    if (*(unsigned char *) (cur + 0x10) == 1) {
        func_0200aa78(*(int **) (cur + 0xc), pos, b, c);
        *(unsigned char *) (cur + 0x10) = 0;
    }
    if (func_0200ab58(*(int *) (cur + 0xc), pos, 0) == 0) {
        return 0;
    }
    *(int *) (cur + 8) = pos;
    return 1;
}
