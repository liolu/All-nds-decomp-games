/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov017_GetField8Field68 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/field/ov017_field_deposits/Ov017_GetField8Field68.c (license: CC0-1.0), reused by tools/donor_match.py */
#pragma ipa file
void *func_02082704(void *self) {
    return *(void **) ((char *) *(void **) ((char *) self + 8) + 0x68);
}
