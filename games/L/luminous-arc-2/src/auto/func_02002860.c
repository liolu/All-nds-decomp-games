#include "m2c.h"

M2C_UNK func_02002734(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02147834;

void func_02002860(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02002734(&data_02147834);
}
