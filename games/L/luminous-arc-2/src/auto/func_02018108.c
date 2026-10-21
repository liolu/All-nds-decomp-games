#include "m2c.h"

M2C_UNK func_02006f34();                            /* extern */
extern s16 data_021508dc;

void func_02018108(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021508dc = 1;
        return;
    }
    func_02006f34();
}
