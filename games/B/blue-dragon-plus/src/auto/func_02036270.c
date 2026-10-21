#include "engine.h"
#include "m2c.h"

void func_02033e74(M2C_UNK);
void func_0203942c(M2C_UNK);

extern s32 data_020826b8;
extern M2C_UNK data_0215da38;

void func_02036270(void) {
    if (data_020826b8 != -1) {
        func_0203942c(data_020826b8);
    }
    func_02033e74(M2C_FIELD(&data_0215da38, s32 *, 0));
    M2C_FIELD(&data_0215da38, s32 *, 0)    = 0;
    M2C_FIELD(&data_0215da38, s32 *, 0x10) = 0;
}
