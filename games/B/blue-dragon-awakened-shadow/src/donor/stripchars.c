/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* stripchars from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gbucket.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
char *stripchars(char *s) {
    char *p = s;
    while (*s) {
        if (*s == '\\') {
            *s = '/';
        }
        s++;
    }
    return p;
}
