/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02038198();                                /* extern */
M2C_UNK func_020394e4(void *, void *, M2C_UNK, u8); /* extern */

void func_0203946c(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0 = func_02038198();
    if (temp_r0 == -1) {
        return;
    }
    func_020394e4(arg0, arg1, 2, M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x644) + temp_r0), u8 *, 8));
    temp_r0_2 = arg0 + (temp_r0 * 2);
    M2C_FIELD(arg1, s32 *, 4) =
        (s32) (M2C_FIELD(arg1, s32 *, 4) + (M2C_FIELD(temp_r0_2, s16 *, 0x694) - M2C_FIELD(temp_r0_2, s16 *, 0x69C)));
    if ((s32) M2C_FIELD(arg1, s32 *, 4) < 0) {
        M2C_FIELD(arg1, s32 *, 4) = 0;
    }
}
