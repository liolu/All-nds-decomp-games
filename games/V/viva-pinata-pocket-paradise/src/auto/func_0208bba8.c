#include "m2c.h"

M2C_UNK func_0208bd50();                            /* extern */
extern s16 data_020d3f68;

void func_0208bba8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020d3f68 = 1;
        return;
    }
    func_0208bd50();
}
