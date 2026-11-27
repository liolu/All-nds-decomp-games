/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TableRemove from https://github.com/Project-Holon/aletheia src/game/ov009/hashtable.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
struct HashImplementation {
    struct DArrayImplementation **buckets;
    int nbuckets;
    void (*freefn)(void *);
    int (*hashfn)(void *, int);
    int (*compfn)(void *, void *);
};
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern void ArrayDeleteAt(struct DArrayImplementation *array, int n);
extern int ArraySearch(struct DArrayImplementation *array, void *key, int (*comparator)(void *, void *), int fromIndex,
                       int isSorted);
extern int TableRemove(struct HashImplementation *table, void *delElem);
int TableRemove(struct HashImplementation *table, void *delElem) {
    int itempos;
    int hash;

    if (table == 0) {
        return 0;
    }
    hash    = table->hashfn(delElem, table->nbuckets);
    itempos = ArraySearch(table->buckets[hash], delElem, table->compfn, 0, 0);
    if (itempos == -1) {
        return 0;
    }
    ArrayDeleteAt(table->buckets[hash], itempos);
    return 1;
}
