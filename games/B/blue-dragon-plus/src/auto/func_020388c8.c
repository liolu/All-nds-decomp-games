#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern u16 data_0215de30;

void func_020388c8(void) {
    s32 temp_r0;

    temp_r0 = func_02038e10();
    if (data_0215de30 != 0) {
        data_0215de30 = 0;
    }
    func_02038e24(temp_r0);
}
