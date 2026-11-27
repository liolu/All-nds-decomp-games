/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ArraySearch from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef struct DArrayImplementation *DArray;
typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
typedef void (*ArrayElementFreeFn)(void *elem);
extern void *ArrayNth(DArray array, int n);
extern int ArraySearch(DArray array, const void *key, ArrayCompareFn comparator, int fromIndex, int isSorted);
struct DArrayImplementation {
    int count, capacity;
    int elemsize;
    int growby;
    ArrayElementFreeFn elemfreefn;
    void *list;
};
extern void *mylsearch(const void *key, void *base, int count, int size, ArrayCompareFn comparator);
extern void *mybsearch(const void *elem, void *base, int num, int elemsize, ArrayCompareFn comparator, int *found);
void *ArrayNth(DArray array, int n);
int ArraySearch(DArray array, const void *key, ArrayCompareFn comparator, int fromIndex, int isSorted) {
    void *res;
    int found = 1;
    if (!array || array->count == 0) {
        return -1;
    }

    if (isSorted) {
        res = mybsearch(key, ArrayNth(array, fromIndex), array->count - fromIndex, array->elemsize, comparator, &found);
    } else {
        res = mylsearch(key, ArrayNth(array, fromIndex), array->count - fromIndex, array->elemsize, comparator);
    }
    if (res != 0 && found) {
        return (((char *) res - (char *) array->list) / array->elemsize);
    } else {
        return -1;
    }
}
void *mylsearch(const void *key, void *base, int count, int size, ArrayCompareFn comparator);
void *mybsearch(const void *elem, void *base, int num, int elemsize, ArrayCompareFn comparator, int *found);
