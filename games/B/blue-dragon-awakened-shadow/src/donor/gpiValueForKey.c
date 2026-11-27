/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiValueForKey from https://github.com/Project-Holon/aletheia src/game/ov009/gpiutility.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern int gpiValueForKey(const char *command, const char *key, char *value, int valueLen);
typedef unsigned long size_t;
extern size_t strlen(const char *str);
extern char *strstr(const char *str1, const char *str2);
extern int gpiValueForKey(const char *command, const char *key, char *value, int valueLen);
int gpiValueForKey(const char *command, const char *key, char *value, int valueLen) {
    char *p;
    int i;
    char keychar = key[0];
    char c;

    p = (char *) strstr(command, key);
    if (p == 0) {
        return 0;
    }
    p += strlen(key);
    i = 0;
    while ((i < valueLen - 1) && ((c = p[i]) != '\0') && (c != keychar)) {
        value[i] = c;
        i++;
    }
    value[i] = '\0';
    return 1;
}
