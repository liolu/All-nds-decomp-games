#include "m2c.h"

M2C_UNK func_02056b34(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0211af5a;

void func_02056a4c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02056b34(&data_0211af5a);
}
