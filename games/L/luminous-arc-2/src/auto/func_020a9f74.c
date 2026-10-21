/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a9f74 from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by
 * tools/donor_match.py
 */
typedef unsigned long size_t;
typedef struct DArrayImplementation *DArray;
typedef void (*ArrayElementFreeFn)(void *elem);
extern void *func_020ab2f4(void *ptr, size_t size);
struct DArrayImplementation {
    int count, capacity;
    int elemsize;
    int growby;
    ArrayElementFreeFn elemfreefn;
    void *list;
};
void func_020a9f74(DArray array) {
    {};
    array->capacity += array->growby;
    array->list = func_020ab2f4(array->list, (size_t) array->capacity * array->elemsize);
    {};
    ;
}
