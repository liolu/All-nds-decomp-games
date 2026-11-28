/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef int s32;
typedef enum {
    E0 = 0,
    E1 = 1
} En;

s32 func_ov123_0208a4dc(void *, s32, s32);

s32 func_ov123_02089710(void *a) {
    s32 t = *(s32 *) ((u8 *) a + 0xC);
    En r2;
    if (t == 7) {
        return 1;
    }
    if (t == 6) {
        r2 = E0;
    } else {
        r2 = E1;
    }
    if (func_ov123_0208a4dc(a, 2, r2) == 0) {
        return 0;
    }
    return 1;
}
