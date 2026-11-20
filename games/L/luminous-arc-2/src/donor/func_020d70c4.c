/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_GetIndexedWordAt0x88 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_GetIndexedWordAt0x88.c (license: CC0-1.0), reused by tools/donor_match.py */
#pragma ipa file
int func_020d70c4(int p) {
    int i = *(int *) (p + 0x90);
    return *(int *) (p + i * 4 + 0x88);
}
