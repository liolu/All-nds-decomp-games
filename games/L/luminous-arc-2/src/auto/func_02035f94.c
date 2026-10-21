#include "m2c.h"

M2C_UNK func_020cb3f8(s32, s32, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_02035f94(s32 arg0, u32 arg1, u32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        if (arg1 > arg2) {
            func_020cb3f8(arg5, arg6, arg3, arg4, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x9000);
            return;
        }
        if (arg1 < arg2) {
            func_020cb3f8(arg5, arg6, arg3, arg4, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x8000);
            return;
        }
        func_020cb3f8(arg5, arg6, arg3, arg4, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x7000);
        return;
    }
    func_020cb3f8(arg5, arg6, arg3, arg4, M2C_FIELD(&data_02181a4c, s32 *, 0x14C), 0x7000);
}
