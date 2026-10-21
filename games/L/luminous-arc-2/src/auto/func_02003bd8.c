#include "engine.h"
#include "m2c.h"

void func_02001d44(M2C_UNK);
void func_02007218(M2C_UNK);

extern s32 data_020ee404;
extern M2C_UNK data_02147840;

void func_02003bd8(void) {
    if (data_020ee404 != -1) {
        func_02007218(data_020ee404);
    }
    func_02001d44(M2C_FIELD(&data_02147840, s32 *, 0x14));
    M2C_FIELD(&data_02147840, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02147840, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02147840, s32 *, 0xC)  = 0;
}
