/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DoSet from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gbucket.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern char *goastrdup(const char *src);
extern void gsifree(void *ptr);
typedef enum {
    bt_int,
    bt_float,
    bt_string
} BucketType;
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
char *stripchars(char *s);
void *DoSet(bucket_t *pbucket, void *value) {
    if (pbucket->type == bt_int) {
        pbucket->vals.ival = *(int *) value;
    } else if (pbucket->type == bt_float) {
        pbucket->vals.fval = *(double *) value;
    } else if (pbucket->type == bt_string) {
        if (pbucket->vals.sval != 0) {
            gsifree(pbucket->vals.sval);
        }
        pbucket->vals.sval = (value == 0 ? 0 : stripchars(goastrdup((char *) value)));
    }
    return DoGet(pbucket);
}
void *DoGet(bucket_t *pbucket);
