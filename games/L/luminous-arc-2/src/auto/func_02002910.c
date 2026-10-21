#include "m2c.h"

M2C_UNK func_02002734(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214783a;

void func_02002910(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02002734(&data_0214783a);
}
