/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strcat from https://github.com/Yokimitsuro/khrecoded-decomp libs/msl/c/calls/strcat.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
char *func_02005134(char *destination, const char *source) {
    unsigned char *output      = (unsigned char *) destination;
    const unsigned char *input = (const unsigned char *) source;

    while (*output++ != 0) {
    }
    output--;
    while ((*output++ = *input++) != 0) {
    }
    return destination;
}
