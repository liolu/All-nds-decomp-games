/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TableFree from https://github.com/Project-Holon/aletheia src/game/ov009/hashtable.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
struct HashImplementation {
    struct DArrayImplementation **buckets;
    int nbuckets;
    void (*freefn)(void *);
    int (*hashfn)(void *, int);
    int (*compfn)(void *, void *);
};
extern void gsifree(void *p);
struct DArrayImplementation {
    int count;
    int capacity;
    int elemsize;
    int growby;
    void (*elemfreefn)(void *);
    void *list;
};
extern void ArrayFree(struct DArrayImplementation *array);
extern void TableFree(struct HashImplementation *table);
void TableFree(struct HashImplementation *table) {
    int i;

    if (table == 0) {
        return;
    }
    for (i = 0; i < table->nbuckets; i++) {
        ArrayFree(table->buckets[i]);
    }
    gsifree(table->buckets);
    gsifree(table);
}
