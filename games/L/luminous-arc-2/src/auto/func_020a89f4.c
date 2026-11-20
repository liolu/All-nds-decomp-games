/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a89f4 from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020a7f60(char *buf, int len);
int func_020a7f60(char *buf, int len);
int func_020a89f4(char *buf, int len) {
    int i;
    while (len > 0 && *buf) {
        i = func_020a7f60(buf, len);
        if (i < 0) {
            return 0;
        }
        buf += i;
        len -= i;
        i = func_020a7f60(buf, len);
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
