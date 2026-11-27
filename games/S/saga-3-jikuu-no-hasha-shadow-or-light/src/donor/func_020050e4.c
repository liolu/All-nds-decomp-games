/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strncpy from https://github.com/Yokimitsuro/khrecoded-decomp libs/msl/c/calls/strncpy.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
char *func_020050e4(char *destination, const char *source, unsigned int length) {
    unsigned char *output      = (unsigned char *) destination;
    const unsigned char *input = (const unsigned char *) source;
    unsigned char *written;

    if (length == 0) {
        return destination;
    }
    do {
        written   = output;
        *output++ = *input++;
        if (*written == 0) {
            while (--length != 0) {
                *output++ = 0;
            }
            return destination;
        }
    } while (--length != 0);
    return destination;
}
