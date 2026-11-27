/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strchr from https://github.com/Yokimitsuro/khrecoded-decomp libs/msl/c/calls/strchr.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
char *func_02005278(char *string, int character) {
    unsigned char target = (unsigned char) character;
    unsigned char current;

    current = *string++;
    while (current != 0) {
        if (current == target) {
            return string - 1;
        }
        current = *string++;
    }
    if (target != 0) {
        return 0;
    }
    return string - 1;
}
