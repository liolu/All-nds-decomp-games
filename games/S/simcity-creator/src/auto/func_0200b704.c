#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);
extern M2C_UNK data_020d2c50;

void func_0200b704(s32 arg0) {
    s32 temp_r0;

    temp_r0                             = func_020066e0();
    M2C_FIELD(&data_020d2c50, s32 *, 4) = arg0;
    func_020066f4(temp_r0);
}
