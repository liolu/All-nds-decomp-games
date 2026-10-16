#include "m2c.h"

M2C_UNK func_020b6f24();                            /* extern */
extern s16 data_020f434c;

void func_020c0c88(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020f434c = 1;
        return;
    }
    func_020b6f24();
}
