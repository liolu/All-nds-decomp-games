/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* mybsearch from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
extern void *mybsearch(const void *elem, void *base, int num, int elemsize, ArrayCompareFn comparator, int *found);
void *mybsearch(const void *elem, void *base, int num, int elemsize, ArrayCompareFn comparator, int *found) {
    int L, H, I, C;

    {};
    ;
    {};
    ;
    {};
    ;

    L      = 0;
    H      = num - 1;
    *found = 0;
    while (L <= H) {
        I = (L + H) >> 1;
        C = comparator(((char *) base) + I * elemsize, elem);
        if (C == 0) {
            *found = 1;
        }
        if (C < 0) {
            L = I + 1;
        } else {
            H = I - 1;
        }
    }
    return ((char *) base) + L * elemsize;
}
