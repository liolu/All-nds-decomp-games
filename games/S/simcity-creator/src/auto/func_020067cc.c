#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
extern s16 data_020d0fc8;

void func_020067cc(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020d0fc8 = 1;
        return;
    }
    func_02006964();
}
