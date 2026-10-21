#include "engine.h"
#include "m2c.h"

void func_02034160(M2C_UNK);
void func_0203942c(M2C_UNK);

extern s32 data_020826b8;
extern M2C_UNK data_0215da1c;

void func_02035e00(void) {
    if (data_020826b8 != -1) {
        func_0203942c(data_020826b8);
    }
    func_02034160(M2C_FIELD(&data_0215da1c, s32 *, 0x18));
    M2C_FIELD(&data_0215da1c, s32 *, 0x18) = 0;
}
