/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FreeElement from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef struct DArrayImplementation *DArray;
typedef void (*ArrayElementFreeFn)(void *elem);
extern void *ArrayNth(DArray array, int n);
struct DArrayImplementation {
    int count, capacity;
    int elemsize;
    int growby;
    ArrayElementFreeFn elemfreefn;
    void *list;
};
void FreeElement(DArray array, int n) {
    if (array->elemfreefn != 0) {
        array->elemfreefn(ArrayNth(array, n));
    }
}
void *ArrayNth(DArray array, int n);
