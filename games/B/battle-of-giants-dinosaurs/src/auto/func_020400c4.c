#include "m2c.h"

M2C_UNK func_020402cc();                            /* extern */
extern s16 data_020c2984;

void func_020400c4(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020c2984 = 1;
        return;
    }
    func_020402cc();
}
