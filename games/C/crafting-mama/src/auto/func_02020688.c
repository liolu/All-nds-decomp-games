#include "m2c.h"

s32 func_02020558(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020209b4();                            /* extern */
extern M2C_UNK data_02096080;
extern M2C_UNK func_020209a4;

s32 func_02020688(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02020558(arg0, &func_020209a4, 0);
    M2C_FIELD(&data_02096080, s32 *, 0x10) = temp_r0;
    if (temp_r0 == 0) {
        func_020209b4();
    }
    return M2C_FIELD(&data_02096080, s32 *, 0x10);
}
