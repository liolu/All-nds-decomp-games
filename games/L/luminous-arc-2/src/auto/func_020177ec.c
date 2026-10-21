#include "engine.h"
#include "m2c.h"

M2C_UNK func_02017640(void);
void func_02017688(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern s32 data_021508c0;

void func_020177ec(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    if (func_02017640() != 0) {
        func_02017688(data_021508c0 + 0xC4, 0, arg0, 0);
    }
    func_02006bf4(temp_r4);
}
