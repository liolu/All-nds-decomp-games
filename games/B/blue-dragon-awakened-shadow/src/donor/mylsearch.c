/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* mylsearch from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
extern void *mylsearch(const void *key, void *base, int count, int size, ArrayCompareFn comparator);
void *mylsearch(const void *key, void *base, int count, int size, ArrayCompareFn comparator) {
    int i;
    {};
    ;
    {};
    ;
    for (i = 0; i < count; i++) {
        if (comparator(key, (char *) base + size * i) == 0) {
            return (char *) base + size * i;
        }
    }
    return 0;
}
