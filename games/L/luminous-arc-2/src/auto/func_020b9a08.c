/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b9a08 from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gbucket.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern char *func_020aad3c(const char *src);
extern void func_020ab30c(void *ptr);
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
extern void *func_020b9a08(bucket_t *pbucket, void *value);
extern void *func_020b9a84(bucket_t *pbucket);
char *func_020b99d8(char *s);
void *func_020b9a08(bucket_t *pbucket, void *value) {
    if (pbucket->type == bt_int) {
        pbucket->vals.ival = *(int *) value;
    } else if (pbucket->type == bt_float) {
        pbucket->vals.fval = *(double *) value;
    } else if (pbucket->type == bt_string) {
        if (pbucket->vals.sval != 0) {
            func_020ab30c(pbucket->vals.sval);
        }
        pbucket->vals.sval = (value == 0 ? 0 : func_020b99d8(func_020aad3c((char *) value)));
    }
    return func_020b9a84(pbucket);
}
void *func_020b9a84(bucket_t *pbucket);
