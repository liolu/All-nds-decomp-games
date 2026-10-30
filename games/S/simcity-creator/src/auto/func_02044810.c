/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_TerminateOnState8 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov105_wireless/Ov105_TerminateOnState8.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_02043350(int);
extern void func_02006964(void);
void func_02044810(char *scene) {
    if (*(unsigned short *) (scene + 2) == 8) {
        func_02043350(9);
        func_02006964();
    }
}
