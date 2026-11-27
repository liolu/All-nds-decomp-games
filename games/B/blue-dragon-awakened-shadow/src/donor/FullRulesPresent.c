/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FullRulesPresent from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int NTSLengthSB(char *buf, int len);
int NTSLengthSB(char *buf, int len);
int FullRulesPresent(char *buf, int len) {
    int i;
    while (len > 0 && *buf) {
        i = NTSLengthSB(buf, len);
        if (i < 0) {
            return 0;
        }
        buf += i;
        len -= i;
        i = NTSLengthSB(buf, len);
        if (i < 0) {
            return 0;
        }
        buf += i;
        len -= i;
    }
    if (len == 0) {
        return 0;
    }
    if (*buf == 0) {
        return 1;
    }
    return 0;
}
