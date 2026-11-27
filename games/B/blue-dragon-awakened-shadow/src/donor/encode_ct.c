/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* encode_ct from https://github.com/LagoLunatic/ooe libs/GameSpy/qr2/qr2.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef unsigned char uchar;
uchar encode_ct(uchar c) {
    if (c < 26) {
        return (uchar) ('A' + c);
    }
    if (c < 52) {
        return (uchar) ('a' + c - 26);
    }
    if (c < 62) {
        return (uchar) ('0' + c - 52);
    }
    if (c == 62) {
        return (uchar) ('+');
    }
    if (c == 63) {
        return (uchar) ('/');
    }

    return 0;
}
