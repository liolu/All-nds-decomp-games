#include "m2c.h"

M2C_UNK func_02064c14();                            /* extern */
extern s16 data_02090fec;

void func_0206c2a8(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02090fec = 1;
        return;
    }
    func_02064c14();
}
