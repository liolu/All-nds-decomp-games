/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* dns_skipname from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
u8 *dns_skipname(u8 *s) {
    u8 c;
    while ((c = *s++) != '\0') {
        if ((c & 0xC0) == 0xC0) {
            return s + 1;
        }
        s += c;
    }
    return s;
}
