/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TableNew2 from https://github.com/Project-Holon/aletheia src/game/ov009/hashtable.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
struct HashImplementation {
    struct DArrayImplementation **buckets;
    int nbuckets;
    void (*freefn)(void *);
    int (*hashfn)(void *, int);
    int (*compfn)(void *, void *);
};
extern void *gsimalloc(unsigned long size);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern struct DArrayImplementation *ArrayNew(int elemSize, int numElemsToAllocate, void (*elemFreeFn)(void *));
extern struct HashImplementation *TableNew2(int elemSize, int nBuckets, int nChains, int (*hashFn)(void *, int),
                                            int (*compFn)(void *, void *), void (*freeFn)(void *));
struct HashImplementation *TableNew2(int elemSize, int nBuckets, int nChains, int (*hashFn)(void *, int),
                                     int (*compFn)(void *, void *), void (*freeFn)(void *)) {
    struct HashImplementation *table;
    int i;

    table          = gsimalloc(sizeof(*table));
    table->buckets = gsimalloc(nBuckets * sizeof(*table->buckets));
    for (i = 0; i < nBuckets; i++) {
        table->buckets[i] = ArrayNew(elemSize, nChains, freeFn);
    }
    table->nbuckets = nBuckets;
    table->freefn   = freeFn;
    table->compfn   = compFn;
    table->hashfn   = hashFn;
    return table;
}
