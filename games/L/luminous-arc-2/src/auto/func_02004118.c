#include "engine.h"
#include "m2c.h"

void func_020020c8(M2C_UNK);
void func_02007218(M2C_UNK);

extern s32 data_020ee404;
extern M2C_UNK data_0214785c;

void func_02004118(void) {
    if (data_020ee404 != -1) {
        func_02007218(data_020ee404);
    }
    func_020020c8(M2C_FIELD(&data_0214785c, s32 *, 0xC));
    M2C_FIELD(&data_0214785c, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0214785c, s32 *, 8)   = 0;
}
