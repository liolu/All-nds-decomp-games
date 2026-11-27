#include "engine.h"
#include "m2c.h"

void func_020ce0e4(M2C_UNK);
void func_020d422c(M2C_UNK);

extern s32 data_02110ca0;
extern M2C_UNK data_021e15fc;

void func_020d0730(void) {
    if (data_02110ca0 != -1) {
        func_020d422c(data_02110ca0);
    }
    func_020ce0e4(M2C_FIELD(&data_021e15fc, s32 *, 8));
    M2C_FIELD(&data_021e15fc, s32 *, 8) = 0;
    M2C_FIELD(&data_021e15fc, s32 *, 4) = 0;
}
