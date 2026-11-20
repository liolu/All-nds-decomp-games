/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov015_GetField8Field78 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/field/ov015_field_pickups/Ov015_GetField8Field78.c (license: CC0-1.0), reused by tools/donor_match.py */
#pragma ipa file
int func_0208271c(char *obj) {
    return *(int *) (*(char **) (obj + 8) + 0x78);
}
