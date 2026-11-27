/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TableCount from https://github.com/Project-Holon/aletheia src/game/ov009/hashtable.c (license: none (MIT = tooling only)),
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
extern int ArrayLength(struct DArrayImplementation *array);
extern int func_0205bdb0(struct HashImplementation *table);
int func_0205bdb0(struct HashImplementation *table) {
    int i;
    int count = 0;

    if (table == 0) {
        return 0;
    }
    for (i = 0; i < table->nbuckets; i++) {
        count += ArrayLength((struct DArrayImplementation *) table->buckets[i]);
    }
    return count;
}
