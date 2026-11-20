#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012b20(void);
void func_02012b68(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

extern s32 data_02034944;

void func_02012ccc(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0201732c();
    if (func_02012b20() != 0) {
        func_02012b68(data_02034944 + 0xC4, 0, arg0, 0);
    }
    func_02017340(temp_r4);
}
