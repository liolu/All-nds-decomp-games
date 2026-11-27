/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DoFind from https://github.com/Project-Holon/aletheia src/game/ov009/gbucket.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
struct bucket_s {
    char *name;
    int type;
    int nvals;
    union {
        int i;
        double d;
        char *s;
        void *p;
    } vals;
};
struct bucketset_s {
    struct HashImplementation *buckets;
};
extern void *TableLookup(struct HashImplementation *table, void *elemKey);
extern struct bucket_s *DoFind(struct bucketset_s *set, char *name);
extern struct bucket_s *DoFind(struct bucketset_s *set, char *name);
extern struct bucketset_s *data_0210f230;
struct bucket_s *DoFind(struct bucketset_s *set, char *name) {
    struct bucket_s tbucket;

    if (set == 0) {
        set = data_0210f230;
    }
    tbucket.name = name;

    return (struct bucket_s *) TableLookup(set->buckets, &tbucket);
}
