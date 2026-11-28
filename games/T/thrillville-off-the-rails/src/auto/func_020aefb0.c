#include "m2c.h"

M2C_UNK func_0209d128(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_020ffccc;
extern M2C_UNK data_020ffde8;

void func_020aefb0(u32 arg0) {
    if (arg0 <= (u32) M2C_FIELD(&data_020ffccc, u32 *, 0x134)) {
        return;
    }
    func_0209d128(&data_020ffde8, arg0 - M2C_FIELD(&data_020ffccc, u32 *, 0x134));
}
