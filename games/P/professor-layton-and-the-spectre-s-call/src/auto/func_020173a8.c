#include "engine.h"
#include "m2c.h"

void func_0201739c(M2C_UNK);

void func_020173a8(s32 arg0) {
    u32 temp_r0;

    temp_r0 = arg0 * 2;
    if (temp_r0 <= 0x10U) {
        return;
    }
    func_0201739c(temp_r0 - 0x10);
}
