#include "m2c.h"

M2C_UNK func_02039148();                            /* extern */
extern s16 data_0215de44;

void func_02038efc(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0215de44 = 1;
        return;
    }
    func_02039148();
}
