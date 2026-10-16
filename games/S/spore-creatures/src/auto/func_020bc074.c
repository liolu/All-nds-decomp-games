#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b6bd0(void);
void func_020b6be4(M2C_UNK);

extern M2C_UNK data_020f39cc;

s32 func_020bc074(void) {
    s32 temp_r0;

    temp_r0 = func_020b6bd0();
    if (M2C_FIELD(&data_020f39cc, s32 *, 0x18) != 0) {
        func_020b6be4(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_020f39cc, s32 *, 0x18) = 1;
    func_020b6be4(temp_r0);
    return 1;
}
