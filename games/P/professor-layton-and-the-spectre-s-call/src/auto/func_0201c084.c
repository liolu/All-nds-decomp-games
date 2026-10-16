#include "engine.h"
#include "m2c.h"

void func_02013628(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020157f0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02015d08(M2C_UNK, M2C_UNK);
M2C_UNK func_020179a0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0201bf78(void);

extern M2C_UNK data_020369f4;

s32 func_0201c084(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;

    temp_r0 = func_0201bf78();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02013628(arg0, temp_r0, arg1);
    func_02015d08(temp_r0, arg1);
    temp_r4 = func_020179a0(0xA, temp_r0, 0);
    func_020157f0((s32) &data_020369f4, temp_r0, 1);
    var_r0 = 8;
    if (temp_r4 >= 0) {
        var_r0 = 2;
    }
    return var_r0;
}
