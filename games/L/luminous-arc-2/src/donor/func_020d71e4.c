/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_BindBitstreamCursor from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_BindBitstreamCursor.c (license: CC0-1.0), reused by tools/donor_match.py
 */
#pragma ipa file
int func_020d71e4(int cur, int src) {
    *(int *) (cur + 0xc)   = src;
    *(int *) (cur + 4)     = *(int *) (src + 0x28) - *(int *) (src + 0x24);
    *(int *) (cur + 8)     = *(int *) (*(int *) (cur + 0xc) + 0x2c) - *(int *) (*(int *) (cur + 0xc) + 0x24);
    *(char *) (cur + 0x10) = 0;
    return 1;
}
