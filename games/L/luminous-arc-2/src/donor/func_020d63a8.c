/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_DecodeAudioEntryChecked from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_DecodeAudioEntryChecked.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_020d6e30(int arg);
int func_020d63a8(int param_1) {
    if (param_1 == 0) {
        return 0;
    }
    return func_020d6e30(param_1) == 1;
}
