#include "engine.h"
#include "m2c.h"

void func_02033d8c(M2C_UNK);
void func_0203942c(M2C_UNK);

extern s32 data_020826b8;
extern M2C_UNK data_0215da38;

void func_020360c8(void) {
    if (data_020826b8 != -1) {
        func_0203942c(data_020826b8);
    }
    func_02033d8c(M2C_FIELD(&data_0215da38, s32 *, 0xC));
    M2C_FIELD(&data_0215da38, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0215da38, s32 *, 8)   = 0;
}
