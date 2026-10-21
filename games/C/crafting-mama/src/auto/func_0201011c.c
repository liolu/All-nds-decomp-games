#include "engine.h"
#include "m2c.h"

void func_0200f868(M2C_UNK);

extern u16 data_02093f08;

void func_0201011c(s32 arg0) {
    data_02093f08 |= (u16) arg0;
    func_0200f868(arg0);
}
