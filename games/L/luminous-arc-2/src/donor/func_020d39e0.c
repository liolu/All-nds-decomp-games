/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_TerminateOnState8 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov105_wireless/Ov105_TerminateOnState8.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_020d2084(int);
extern void func_02006f34(void);
void func_020d39e0(char *scene) {
    if (*(unsigned short *) (scene + 2) == 8) {
        func_020d2084(9);
        func_02006f34();
    }
}
