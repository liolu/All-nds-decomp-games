#include "engine.h"
#include "m2c.h"

void func_020ce7e8(M2C_UNK);
void func_020d422c(M2C_UNK);

extern s32 data_02110ca0;
extern M2C_UNK data_021e15fc;

void func_020d08ac(void) {
    if (data_02110ca0 != -1) {
        func_020d422c(data_02110ca0);
    }
    func_020ce7e8(M2C_FIELD(&data_021e15fc, s32 *, 0x18));
    M2C_FIELD(&data_021e15fc, s32 *, 0x18) = 0;
}
