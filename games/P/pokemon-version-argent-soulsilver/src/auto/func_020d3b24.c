#include "m2c.h"

M2C_UNK func_020d3f48();                            /* extern */
extern s16 data_021e1a24;

void func_020d3b24(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_021e1a24 = 1;
        return;
    }
    func_020d3f48();
}
