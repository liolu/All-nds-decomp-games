#include "engine.h"
#include "m2c.h"

void func_02033bb4(M2C_UNK);
void func_0203942c(M2C_UNK);

extern s32 data_020826b8;
extern M2C_UNK data_0215da38;

void func_02035fdc(void) {
    if (data_020826b8 != -1) {
        func_0203942c(data_020826b8);
    }
    func_02033bb4(M2C_FIELD(&data_0215da38, s32 *, 0x14));
    M2C_FIELD(&data_0215da38, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0215da38, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0215da38, s32 *, 4)    = 0;
    M2C_FIELD(&data_0215da38, s32 *, 0x14) = 0;
}
