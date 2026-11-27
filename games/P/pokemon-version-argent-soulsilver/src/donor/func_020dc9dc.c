/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StoreGlobalPairAt118 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/card/calls/StoreGlobalPairAt118.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
extern int data_021e3840;
void func_020dc9dc(int arg0, int arg1) {
    *(int *) ((char *) &data_021e3840 + 0x118) = arg0;
    *(int *) ((char *) &data_021e3840 + 0x11c) = arg1;
}
