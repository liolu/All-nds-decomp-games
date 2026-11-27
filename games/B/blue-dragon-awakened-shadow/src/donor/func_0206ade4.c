/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* BucketNew from https://github.com/Project-Holon/aletheia src/game/ov009/gbucket.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
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
extern char *goastrdup(char *src);
extern void TableEnter(struct HashImplementation *table, void *newElem);
extern struct bucket_s *DoFind(struct bucketset_s *set, char *name);
extern void *DoSet(struct bucket_s *pbucket, void *value);
extern void *func_0206ade4(struct bucketset_s *set, char *name, int type, void *initialvalue);
extern void *DoSet(struct bucket_s *pbucket, void *value);
extern char *DoGet(char *p);
extern struct bucket_s *DoFind(struct bucketset_s *set, char *name);
extern struct bucketset_s *data_0210f230;
void *func_0206ade4(struct bucketset_s *set, char *name, int type, void *initialvalue) {
    struct bucket_s bucket;

    if (set == 0) {
        set = data_0210f230;
    }
    bucket.name   = goastrdup(name);
    bucket.type   = type;
    bucket.vals.p = 0;
    bucket.nvals  = 1;
    DoSet(&bucket, initialvalue);
    TableEnter(set->buckets, &bucket);

    return DoGet((char *) DoFind(set, name));
}
void *DoSet(struct bucket_s *pbucket, void *value);
char *DoGet(char *p);
struct bucket_s *DoFind(struct bucketset_s *set, char *name);
