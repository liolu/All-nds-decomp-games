#include "m2c.h"

s32 func_020347c4();                                /* extern */
M2C_UNK func_020391f4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02039918(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020826b8;

void func_02035838(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020347c4();
    if ((data_020826b8 != -1) && (arg2 > 0x30U)) {
        func_020391f4(data_020826b8, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02039918(arg0, temp_ip + arg1, arg2);
}
