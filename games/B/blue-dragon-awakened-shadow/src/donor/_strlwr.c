/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _strlwr from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformUtil.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern unsigned char __lower_map[];
inline int tolower(int c) {
    return (c < 0 || c >= 128 ? c : (int) __lower_map[c]);
}
extern char *_strlwr(char *string);
char *_strlwr(char *string) {
    char *hold = string;
    while (*string) {
        *string = (char) tolower(*string);
        string++;
    }

    return hold;
}
