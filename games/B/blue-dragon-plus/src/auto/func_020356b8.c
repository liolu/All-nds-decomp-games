#include "m2c.h"

s32 func_02034678();                                /* extern */
M2C_UNK func_02039264(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020398e8(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020826b8;

void func_020356b8(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02034678();
    if ((data_020826b8 != -1) && (arg2 > 0x1CU)) {
        func_02039264(data_020826b8, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020398e8(arg0, temp_ip + arg1, arg2);
}
