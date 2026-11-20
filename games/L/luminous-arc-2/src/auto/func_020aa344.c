/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020aa344 from https://github.com/LagoLunatic/ooe libs/GameSpy/darray.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct DArrayImplementation *DArray;
typedef int (*ArrayMapFn2)(void *elem, void *clientData);
typedef void (*ArrayElementFreeFn)(void *elem);
extern void *func_020aa070(DArray array, int n);
extern void *func_020aa344(DArray array, ArrayMapFn2 fn, void *clientData);
struct DArrayImplementation {
    int count, capacity;
    int elemsize;
    int growby;
    ArrayElementFreeFn elemfreefn;
    void *list;
};
void *func_020aa070(DArray array, int n);
void *func_020aa344(DArray array, ArrayMapFn2 fn, void *clientData) {
    int i;
    void *pcurr;

    {};
    ;
    {};
    ;

    for (i = (array->count - 1); i >= 0; i--) {
        pcurr = func_020aa070(array, i);
        if (!fn(pcurr, clientData)) {
            return pcurr;
        }
    }

    return 0;
}
