#include "m2c.h"

M2C_UNK func_020389c0();                            /* extern */
extern void *data_0216bc50;

void func_02038994(void) {
    if (M2C_FIELD(data_0216bc50, s32 *, 0xE0) != 0) {
        return;
    }
    M2C_FIELD(data_0216bc50, s32 *, 0xE0) = 1;
    func_020389c0();
}
