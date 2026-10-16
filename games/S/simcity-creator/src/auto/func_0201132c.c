#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
extern s16 data_020d4184;

void func_0201132c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020d4184 = 1;
        return;
    }
    func_02006964();
}
