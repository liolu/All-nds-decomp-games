/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* BucketAvg from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gbucket.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct bucketset_s *bucketset_t;
typedef enum {
    bt_int,
    bt_float,
    bt_string
} BucketType;
extern void *BucketAvg(bucketset_t set, char *name, void *value);
extern void *bint(int i);
extern void *bfloat(double f);
typedef struct HashImplementation *HashTable;
struct bucketset_s {
    HashTable buckets;
};
typedef struct bucket_s {
    char *name;
    BucketType type;
    int nvals;
    union {
        int ival;
        double fval;
        char *sval;
    } vals;
} bucket_t;
extern void *DoSet(bucket_t *pbucket, void *value);
extern void *DoGet(bucket_t *pbucket);
extern bucket_t *DoFind(bucketset_t set, char *name);
void *BucketAvg(bucketset_t set, char *name, void *value) {
    bucket_t *pbucket = DoFind(set, name);
    if (!pbucket) {
        return 0;
    }

    if (pbucket->type == bt_int) {
        return DoSet(pbucket, bint(((((*(int *) DoGet(pbucket)) * pbucket->nvals) + (*(int *) value)) / (++pbucket->nvals))));
    }
    if (pbucket->type == bt_float) {
        return DoSet(pbucket,
                     bfloat(((((*(double *) DoGet(pbucket)) * pbucket->nvals) + (*(double *) value)) / (++pbucket->nvals))));
    }

    return DoGet(pbucket);
}
void *bint(int i);
void *bfloat(double f);
void *DoSet(bucket_t *pbucket, void *value);
void *DoGet(bucket_t *pbucket);
bucket_t *DoFind(bucketset_t set, char *name);
