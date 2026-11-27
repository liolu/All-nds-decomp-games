/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TableMapSafe2 from https://github.com/Project-Holon/aletheia src/game/ov009/hashtable.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
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
extern void *ArrayMapBackwards2(struct DArrayImplementation *array, int (*fn)(void *, void *), void *clientData);
extern void *TableMapSafe2(struct HashImplementation *table, int (*fn)(void *, void *), void *clientData);
void *TableMapSafe2(struct HashImplementation *table, int (*fn)(void *, void *), void *clientData) {
    void *pcurr;
    int i;

    for (i = 0; i < table->nbuckets; i++) {
        pcurr = table->buckets[i];
        pcurr = ArrayMapBackwards2(pcurr, fn, clientData);
        if (pcurr != 0) {
            return pcurr;
        }
    }
    return 0;
}
