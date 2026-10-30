/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WH_Reset from https://github.com/Yokimitsuro/khdays-decomp src/overlays/system/ov105_wireless/Ov105_WH_Reset.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
extern int func_02044384(void);
extern void func_02043350(int);
void func_02044b74(void) {
    if (func_02044384() == 0) {
        func_02043350(0xa);
    }
}
