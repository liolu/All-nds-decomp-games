#include "m2c.h"

M2C_UNK func_020815fc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d8554;

void func_02081654(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020815fc(&data_020d8554);
}
