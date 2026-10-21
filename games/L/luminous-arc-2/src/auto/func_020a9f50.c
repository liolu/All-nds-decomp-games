/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a9f50 from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by
 * tools/donor_match.py
 */
typedef struct DArrayImplementation *DArray;
typedef void (*ArrayElementFreeFn)(void *elem);
extern void *func_020aa070(DArray array, int n);
struct DArrayImplementation {
    int count, capacity;
    int elemsize;
    int growby;
    ArrayElementFreeFn elemfreefn;
    void *list;
};
void func_020a9f50(DArray array, int n) {
    if (array->elemfreefn != 0) {
        array->elemfreefn(func_020aa070(array, n));
    }
}
void *func_020aa070(DArray array, int n);
