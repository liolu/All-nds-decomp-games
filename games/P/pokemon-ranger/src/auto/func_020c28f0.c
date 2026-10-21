#include "engine.h"
#include "m2c.h"

void func_020c33f0(M2C_UNK);

extern u16 data_020f68d0;

void func_020c28f0(s32 arg0) {
    data_020f68d0 |= arg0;
    func_020c33f0(arg0);
}
