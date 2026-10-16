#include "engine.h"
#include "m2c.h"

M2C_UNK func_02062818(M2C_UNK);
void func_02064450(M2C_UNK);

extern M2C_UNK data_0208e930;

void func_020646f8(void) {
    if (M2C_FIELD(&data_0208e930, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0208e930, u16 *, 0) = 1U;
    func_02064450(1);
    M2C_FIELD(&data_0208e930, s32 *, 4) = 0;
    M2C_FIELD(&data_0208e930, s32 *, 8) = 0;
    func_02062818(0x10);
}
