#include "m2c.h"

M2C_UNK func_020572e8();                            /* extern */
extern s16 data_020b3024;

void func_020571c8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020b3024 = 1;
        return;
    }
    func_020572e8();
}
