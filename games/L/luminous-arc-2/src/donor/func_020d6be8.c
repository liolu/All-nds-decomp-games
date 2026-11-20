/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_Get80or100ByField28 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_Get80or100ByField28.c (license: CC0-1.0), reused by tools/donor_match.py */
#pragma ipa file
int func_020d6be8(int p) {
    if (*(int *) (p + 0x20) == 0) {
        return 0;
    }
    if (*(int *) (p + 0x28) != 0) {
        return 0x80;
    }
    return 0x100;
}
