#include "m2c.h"

M2C_UNK func_02039148();                            /* extern */
extern s16 data_021604ac;

void func_020421ac(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021604ac = 1;
        return;
    }
    func_02039148();
}
