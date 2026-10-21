#include "m2c.h"

M2C_UNK func_020cb1e4(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_020351fc(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (arg2 == 1) {
        func_020cb1e4(2, 2, arg0, arg1, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x60D8);
        func_020cb1e4(2, 2, arg0, arg1 + 2, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x60DC);
        return;
    }
    func_020cb1e4(2, 2, arg0, arg1, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x60D0);
    func_020cb1e4(2, 2, arg0, arg1 + 2, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x60D4);
}
