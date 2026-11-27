/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NTSLengthSB from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
extern int NTSLengthSB(char *buf, int len);
int NTSLengthSB(char *buf, int len) {
    int i;
    for (i = 0; i < len; i++) {
        if (buf[i] == '\0') {
            return i + 1;
        }
    }
    return -1;
}
