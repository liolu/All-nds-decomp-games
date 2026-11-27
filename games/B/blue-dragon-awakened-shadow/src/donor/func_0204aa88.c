/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02041420 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02041420.legacy_sp3.c (license:
 * MIT), reused by tools/donor_match.py */
typedef void (*fn_02041470_t)(void *a, int v, int z);
typedef struct {
    char _pad[0x1014];
    fn_02041470_t fn;
} ctx_02041470_t;
extern void *data_020f960c;
extern void MI_CpuFill8(void *p, int b, int c);
void func_0204aa88(ctx_02041470_t *ctx, int *p) {
    int v            = *p;
    fn_02041470_t fn = ctx->fn;
    if (v != 0) {
        fn(&data_020f960c, v, 0);
    }
    MI_CpuFill8(p, 0, 0x10);
}
