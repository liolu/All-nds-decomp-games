#include "m2c.h"

M2C_UNK func_0204eeb4();                            /* extern */
M2C_UNK func_0204eee8();                            /* extern */
M2C_UNK func_0204ef74(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0204efd8();                                /* extern */
s32 func_02088e00();                                /* extern */
extern M2C_UNK data_020d6814;

s32 func_0204ee50(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    func_0204eeb4();
    func_0204ef74(arg0, arg1, arg2);
    if (func_0204efd8() == 0) {
        do {
            M2C_FIELD(&data_020d6814, M2C_UNK(**)(s32), 0)(M2C_FIELD(&data_020d6814, s32 *, 8));
        } while (func_0204efd8() == 0);
    }
    temp_r4 = func_02088e00();
    func_0204eee8();
    return temp_r4;
}
