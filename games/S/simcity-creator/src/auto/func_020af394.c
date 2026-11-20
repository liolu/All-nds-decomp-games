#include "m2c.h"

M2C_UNK func_020042d8(M2C_UNK);                     /* extern */
M2C_UNK func_02004ce0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02004ef4();                            /* extern */
extern M2C_UNK data_02162e18;

void func_020af394(void) {
    *(u16 *) 0x04000004 &= ~0x20;
    func_020042d8(4);
    func_02004ce0(&data_02162e18, 0);
    func_02004ef4();
}
