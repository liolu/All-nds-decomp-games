/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiStatusInfoAddKey from https://github.com/Project-Holon/aletheia src/game/ov009/gpikeys.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct GPIKey {
    char *keyName;
    char *keyValue;
} GPIKey;
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern void ArrayInsertSorted(struct DArrayImplementation *array, void *newElem, int (*comparator)(void *, void *));
extern void gpiSetErrorString(void **connection, char *errorString);
extern char *goastrdup(char *src);
extern int gpiStatusInfoKeyCompFunc(void *elem1Arg, void *elem2Arg);
extern int gpiStatusInfoAddKey(void **connection, void *keys, char *theKeyName, char *theKeyValue);
extern char data_020fb4a4[];
extern char data_020fb4b8[];
int gpiStatusInfoKeyCompFunc(void *elem1Arg, void *elem2Arg);
int gpiStatusInfoAddKey(void **connection, void *keys, char *theKeyName, char *theKeyValue) {
    struct GPIKey aKey;

    if (theKeyName == 0) {
        gpiSetErrorString(connection, data_020fb4a4);
        return 2;
    }
    if (theKeyValue == 0) {
        gpiSetErrorString(connection, data_020fb4b8);
        return 2;
    }
    aKey.keyName  = goastrdup(theKeyName);
    aKey.keyValue = goastrdup(theKeyValue);
    ArrayInsertSorted(keys, &aKey, gpiStatusInfoKeyCompFunc);
    return 0;
}
