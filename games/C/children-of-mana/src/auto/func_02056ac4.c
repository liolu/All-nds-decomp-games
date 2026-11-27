#include "m2c.h"

M2C_UNK func_02056b34(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0211af54;

void func_02056ac4(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02056b34(&data_0211af54);
}
