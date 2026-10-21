/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _strlwr from projets/blue-dragon-awakened-shadow/src/donor/_strlwr.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern unsigned char data_020dc97c[];
inline int tolower(int c) {
    return (c < 0 || c >= 128 ? c : (int) data_020dc97c[c]);
}
extern char *func_020aad70(char *string);
char *func_020aad70(char *string) {
    char *hold = string;
    while (*string) {
        *string = (char) tolower(*string);
        string++;
    }

    return hold;
}
