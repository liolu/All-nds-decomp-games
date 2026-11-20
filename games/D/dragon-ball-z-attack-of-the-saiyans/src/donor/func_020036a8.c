/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02030734 from projets/battle-of-giants-dinosaurs/src/auto/func_02030734.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char *func_020036a8(const char *str, int chr);
char *func_020036a8(const char *str, int chr) {
    const char *p = str;
    char c        = chr;
    char ch;

    while ((ch = *p++)) {
        if (ch == c) {
            return ((char *) (p - 1));
        }
    }

    return (c ? 0 : (char *) (p - 1));
}
