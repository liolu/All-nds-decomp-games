#include "m2c.h"

s32 func_0201b7c4(M2C_UNK *, M2C_UNK *, s32);       /* extern */
s32 func_0201b960(M2C_UNK *, s32);                  /* extern */
s32 func_02053ad0();                                /* extern */
M2C_UNK func_02088a58(s32, s32);                    /* extern */
extern M2C_UNK data_0209eeb0;
extern M2C_UNK data_0209eeb8;
extern M2C_UNK data_0209f024;

void func_02053504(s32 arg0) {
    s32 temp_r0;

    if (arg0 <= 0) {
        return;
    }
    temp_r0 = func_02053ad0();
    if (temp_r0 == 0) {
        return;
    }
    func_02088a58(temp_r0 + 0x114, func_0201b960(&data_0209eeb8, func_0201b7c4(&data_0209f024, &data_0209eeb0, arg0)));
}
