#include "engine.h"
#include "m2c.h"

void func_02033570(M2C_UNK);

extern u16 data_0215da00;

void func_02033fa8(s32 arg0) {
    data_0215da00 |= arg0;
    func_02033570(arg0);
}
