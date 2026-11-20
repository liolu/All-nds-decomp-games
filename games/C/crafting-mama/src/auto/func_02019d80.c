#include "m2c.h"

M2C_UNK func_02019d74(s32);                         /* extern */

void func_02019d80(s32 arg0) {
    u32 temp_r0;

    temp_r0 = arg0 * 2;
    if (temp_r0 <= 0x10U) {
        return;
    }
    func_02019d74(temp_r0 - 0x10);
}
