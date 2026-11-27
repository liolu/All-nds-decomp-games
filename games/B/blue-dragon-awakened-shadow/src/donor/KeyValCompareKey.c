/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* KeyValCompareKey from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_server.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
extern int strcasecmp(char *str1, char *str2);
typedef struct _SBKeyValuePair {
    const char *key;
    const char *value;
} SBKeyValuePair;
int KeyValCompareKey(const void *entry1, const void *entry2) {
    {};
    {};
    if ((((SBKeyValuePair *) entry1)->key == 0) || (((SBKeyValuePair *) entry2)->key == 0)) {
        return 1;
    }

    return strcasecmp(((SBKeyValuePair *) entry1)->key, ((SBKeyValuePair *) entry2)->key);
}
