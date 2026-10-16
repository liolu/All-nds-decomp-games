#include "m2c.h"

s32 func_02061894();                                /* extern */
M2C_UNK func_02064cc0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02065040(M2C_UNK, s32, u32);           /* extern */
extern s32 data_0208de88;

void func_02061f04(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02061894();
    if ((data_0208de88 != -1) && (arg2 > 0x30U)) {
        func_02064cc0(data_0208de88, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02065040(arg0, temp_ip + arg1, arg2);
}
