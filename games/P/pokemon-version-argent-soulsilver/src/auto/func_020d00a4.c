#include "m2c.h"

s32 func_020cece4();                                /* extern */
M2C_UNK func_020d4064(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020d47b8(M2C_UNK, s32, u32);           /* extern */
extern s32 data_02110ca0;

void func_020d00a4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020cece4();
    if ((data_02110ca0 != -1) && (arg2 > 0x1CU)) {
        func_020d4064(data_02110ca0, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020d47b8(arg0, temp_ip + arg1, arg2);
}
