#include "engine.h"
#include "m2c.h"

void func_02064508(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02078830(void);

void func_02078868(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02078830();
    if (temp_r0 == 0) {
        return;
    }
    func_02064508(temp_r0, (s32) (u8) arg0, 6, 0);
}
