#include "m2c.h"

s32 func_0206f9dc(s32, u16);                        /* extern */
M2C_UNK func_0206fa4c(s32, u16);                    /* extern */
extern s32 data_020f4720;

void func_0206e734(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x41) << 0x18) >> 0x1F) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = func_0206f9dc(data_020f4720, M2C_FIELD(arg1, u16 *, 0x3C));
        return;
    }
    func_0206fa4c(data_020f4720, M2C_FIELD(arg1, u16 *, 0x3C));
}
