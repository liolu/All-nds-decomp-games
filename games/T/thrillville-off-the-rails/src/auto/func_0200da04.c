#include "m2c.h"

M2C_UNK func_0200d88c();                            /* extern */
extern M2C_UNK *data_020dff24;
extern M2C_UNK *data_020dff28;
extern M2C_UNK data_020eb104;
extern M2C_UNK func_0200d930;
extern M2C_UNK func_0200d8dc;

void func_0200da04(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_020eb104, s32 *, 8)    = arg0;
    M2C_FIELD(&data_020eb104, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_020eb104, s32 *, 0x10) = arg2;
    func_0200d88c();
    if (arg3 == 0) {
        return;
    }
    data_020dff24 = &func_0200d930;
    data_020dff28 = &func_0200d8dc;
}
