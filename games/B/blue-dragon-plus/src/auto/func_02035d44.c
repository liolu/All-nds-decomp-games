#include "engine.h"
#include "m2c.h"

void func_020340e0(M2C_UNK);
void func_0203942c(M2C_UNK);

extern s32 data_020826b8;
extern s32 data_0215da1c;

void func_02035d44(void) {
    if (data_020826b8 != -1) {
        func_0203942c(data_020826b8);
    }
    func_020340e0(data_0215da1c);
    data_0215da1c = 0;
}
