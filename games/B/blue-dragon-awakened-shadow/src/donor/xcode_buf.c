/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* xcode_buf from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gstats.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void xcode_buf(char *buf, int len);
extern char *enc;
void xcode_buf(char *buf, int len) {
    int i;
    char *pos = enc;

    for (i = 0; i < len; i++) {
        buf[i] ^= *pos++;
        if (*pos == 0) {
            pos = enc;
        }
    }
}
