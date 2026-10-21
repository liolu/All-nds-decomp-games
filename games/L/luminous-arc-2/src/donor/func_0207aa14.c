/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov002_ReleaseObjectService from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/scenes/ov002_field/Ov002_ReleaseObjectService.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_020cd7d0();
extern int data_02170244;
void func_0207aa14(void) {
    int p = *(int *) ((char *) &data_02170244 + 4);
    if (p != 0) {
        func_020cd7d0(p);
        *(int *) ((char *) &data_02170244 + 4) = 0;
    }
}
