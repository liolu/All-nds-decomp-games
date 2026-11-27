/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MacAddressesEqual from https://github.com/Yokimitsuro/khrecoded-decomp src/overlays/ov015/calls/MacAddressesEqual.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef int BOOL;
BOOL func_020b0248(u8 *macA, u8 *macB) {
    int i = 0;
    do {
        if (macA[i] != macB[i]) {
            return 0;
        }
        i++;
    } while (i < 6);
    return 1;
}
