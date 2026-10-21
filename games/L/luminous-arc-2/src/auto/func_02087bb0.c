#include "m2c.h"

M2C_UNK func_02087ca0();                            /* extern */
s32 func_020acb5c(s32, M2C_UNK, M2C_UNK *);         /* extern */
extern M2C_UNK data_0211d67c;
extern M2C_UNK data_021704e8;

s32 func_02087bb0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020acb5c(M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 4), arg0, &data_0211d67c);
    func_02087ca0();
    return temp_r4;
}
