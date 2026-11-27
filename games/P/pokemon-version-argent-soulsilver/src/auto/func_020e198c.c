#include "m2c.h"

M2C_UNK func_020d3f48();                            /* extern */
extern s16 data_021e4d64;

void func_020e198c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021e4d64 = 1;
        return;
    }
    func_020d3f48();
}
