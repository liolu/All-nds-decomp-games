/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FindFinal from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gstats.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern char *FindFinal(char *buff, int len);
char *FindFinal(char *buff, int len) {
    char *pos = buff;

    while (pos - buff < len - 6) {
        if (pos[0] == '\\' && pos[1] == 'f' && pos[2] == 'i' && pos[3] == 'n' && pos[4] == 'a' && pos[5] == 'l' &&
            pos[6] == '\\') {
            return pos;
        } else {
            pos++;
        }
    }
    return 0;
}
