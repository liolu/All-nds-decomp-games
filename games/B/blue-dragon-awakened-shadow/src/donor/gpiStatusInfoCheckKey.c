/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiStatusInfoCheckKey from https://github.com/Project-Holon/aletheia src/game/ov009/gpikeys.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct GPIKey {
    char *keyName;
    char *keyValue;
} GPIKey;
extern void gsifree(void *p);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern void *ArrayNth(struct DArrayImplementation *array, int n);
extern int ArraySearch(struct DArrayImplementation *array, void *key, int (*comparator)(void *, void *), int fromIndex,
                       int isSorted);
extern void gpiSetErrorString(void **connection, char *errorString);
extern char *goastrdup(char *src);
extern int gpiStatusInfoKeyCompFunc(void *elem1Arg, void *elem2Arg);
extern int gpiStatusInfoCheckKey(void **connection, void *keys, char *keyName, char **keyValue);
extern char data_020fb4a4[];
int gpiStatusInfoKeyCompFunc(void *elem1Arg, void *elem2Arg);
int gpiStatusInfoCheckKey(void **connection, void *keys, char *keyName, char **keyValue) {
    struct GPIKey aKey;
    struct GPIKey *aKeyFound;
    int anIndex;

    if (keyName == 0) {
        gpiSetErrorString(connection, data_020fb4a4);
        return 2;
    }
    aKey.keyName = goastrdup(keyName);
    anIndex      = ArraySearch(keys, &aKey, gpiStatusInfoKeyCompFunc, 0, 1);
    if (anIndex != -1) {
        aKeyFound = (struct GPIKey *) ArrayNth(keys, anIndex);
        *keyValue = aKeyFound->keyValue;
    }
    gsifree(aKey.keyName);
    aKey.keyName = 0;
    return 0;
}
