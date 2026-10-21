#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);
M2C_UNK func_0200cddc(void);
void func_0200d524(M2C_UNK);

extern M2C_UNK data_0214992c;

s32 func_0200d19c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r5;

    temp_r5 = func_02006be0();
    if (func_0200cddc() == 0) {
        func_02006bf4(temp_r5);
        return 1;
    }
    M2C_FIELD(&data_0214992c, s32 *, 0x20) = arg3;
    M2C_FIELD(&data_0214992c, s32 *, 0x24) = arg4;
    M2C_FIELD(&data_0214992c, s32 *, 0x28) = arg2;
    func_0200d524((u8) arg0 | 0x02006100);
    func_0200d524(0x01010000 | (u16) arg1);
    func_02006bf4(temp_r5);
    return 0;
}
