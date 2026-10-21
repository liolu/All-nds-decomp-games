/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c35f8();                                /* extern */
M2C_UNK func_020c8684(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020c87d8(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020f11c0;

void func_020c4af4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020c35f8();
    if ((data_020f11c0 != -1) && (arg2 > 0x30U)) {
        func_020c8684(data_020f11c0, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020c87d8(arg0, temp_ip + arg1, arg2);
}
