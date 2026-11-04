#include "m2c.h"

M2C_UNK func_020455dc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0206b94c;

void func_02045490(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020455dc(&data_0206b94c);
}
