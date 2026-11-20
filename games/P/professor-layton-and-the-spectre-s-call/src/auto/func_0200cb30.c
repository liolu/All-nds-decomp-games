#include "engine.h"
#include "m2c.h"

void func_0200c1d8(M2C_UNK);

extern u16 data_02034804;

void func_0200cb30(s32 arg0) {
    data_02034804 |= (u16) arg0;
    func_0200c1d8(arg0);
}
