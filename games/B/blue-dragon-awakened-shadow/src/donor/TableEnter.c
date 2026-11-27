/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TableEnter from https://github.com/Project-Holon/aletheia src/game/ov009/hashtable.c (license: none (MIT = tooling only)),
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
extern void ArrayAppend(struct DArrayImplementation *array, void *newElem);
extern void ArrayReplaceAt(struct DArrayImplementation *array, void *newElem, int n);
extern int ArraySearch(struct DArrayImplementation *array, void *key, int (*comparator)(void *, void *), int fromIndex,
                       int isSorted);
extern void TableEnter(struct HashImplementation *table, void *newElem);
void TableEnter(struct HashImplementation *table, void *newElem) {
    int itempos;
    int hash;

    if (table == 0) {
        return;
    }
    hash    = table->hashfn(newElem, table->nbuckets);
    itempos = ArraySearch(table->buckets[hash], newElem, table->compfn, 0, 0);
    if (itempos == -1) {
        ArrayAppend(table->buckets[hash], newElem);
    } else {
        ArrayReplaceAt(table->buckets[hash], newElem, itempos);
    }
}
