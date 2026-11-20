/* compiler: 2.0/sp1p5  */
/* func_02065120 from projets/madagascar/src/auto/func_02065120.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK *data_0217b090;
extern s32 data_0217b0a0;
M2C_UNK *func_0205c014(void) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r2;

    temp_r0 = data_0217b090;
    if (temp_r0 == ((void *) 0)) {
        return ((void *) 0);
    }
    temp_r2       = *temp_r0;
    data_0217b090 = temp_r2;
    if (temp_r2 == ((void *) 0)) {
        data_0217b0a0 = 0;
    }
    return temp_r0;
}
