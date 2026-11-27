#include "engine.h"
#include "m2c.h"

void func_020576b4(M2C_UNK);

extern u16 data_0211af44;

void func_02056dac(s32 arg0) {
    data_0211af44 |= arg0;
    func_020576b4(arg0);
}
