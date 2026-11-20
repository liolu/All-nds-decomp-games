#include "m2c.h"

M2C_UNK func_02003710(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020339bc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020339f4(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_02086e84;
extern M2C_UNK data_02086e9c;
extern M2C_UNK data_02086f00;

void func_0205ace4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02003710(M2C_FIELD(&data_02086e84, s32 *, 0x20) + 0x17, &data_02086f00, arg1, arg2);
    if (arg3 == 0) {
        func_020339bc(&data_02086e9c, arg0);
        return;
    }
    func_020339f4(&data_02086e9c, arg0, arg3);
}
