#include "m2c.h"

M2C_UNK func_02064c14();                            /* extern */
extern s16 data_0208e950;

void func_02064b28(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0208e950 = 1;
        return;
    }
    func_02064c14();
}
