#include "engine.h"
#include "m2c.h"

void func_020ce190(M2C_UNK);
void func_020d422c(M2C_UNK);

extern s32 data_02110ca0;
extern M2C_UNK data_021e1618;

void func_020d0a88(void) {
    if (data_02110ca0 != -1) {
        func_020d422c(data_02110ca0);
    }
    func_020ce190(M2C_FIELD(&data_021e1618, s32 *, 0x14));
    M2C_FIELD(&data_021e1618, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_021e1618, s32 *, 0x18) = 0;
    M2C_FIELD(&data_021e1618, s32 *, 4)    = 0;
    M2C_FIELD(&data_021e1618, s32 *, 0x14) = 0;
}
