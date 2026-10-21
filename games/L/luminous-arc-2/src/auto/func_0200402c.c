#include "engine.h"
#include "m2c.h"

void func_02001ef0(M2C_UNK);
void func_02007218(M2C_UNK);

extern s32 data_020ee404;
extern M2C_UNK data_0214785c;

void func_0200402c(void) {
    if (data_020ee404 != -1) {
        func_02007218(data_020ee404);
    }
    func_02001ef0(M2C_FIELD(&data_0214785c, s32 *, 0x14));
    M2C_FIELD(&data_0214785c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0214785c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0214785c, s32 *, 4)    = 0;
    M2C_FIELD(&data_0214785c, s32 *, 0x14) = 0;
}
