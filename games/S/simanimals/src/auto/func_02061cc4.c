#include "m2c.h"

s32 func_02061650();                                /* extern */
M2C_UNK func_02064d30(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02064ff0(M2C_UNK, s32, u32);           /* extern */
extern s32 data_0208de88;

void func_02061cc4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02061650();
    if ((data_0208de88 != -1) && (arg2 > 0x1CU)) {
        func_02064d30(data_0208de88, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02064ff0(arg0, temp_ip + arg1, arg2);
}
