#include "engine.h"
#include "m2c.h"

void func_020553a4(M2C_UNK);

extern u16 data_02161240;

void func_02054c68(s32 arg0) {
    data_02161240 |= arg0;
    func_020553a4(arg0);
}
