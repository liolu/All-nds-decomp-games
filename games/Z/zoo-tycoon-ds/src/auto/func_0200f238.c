/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0200f238(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s8 *, 0x1C738)                      = 2;
    M2C_FIELD(arg1, u8 *, 3)                            = (u8) (M2C_FIELD(arg1, u8 *, 3) & ~2);
    M2C_FIELD(arg1, u8 *, 3)                            = (u8) (M2C_FIELD(arg1, u8 *, 3) & ~8);
    M2C_FIELD(arg1, u8 *, 3)                            = (u8) (M2C_FIELD(arg1, u8 *, 3) & ~1);
    M2C_FIELD((((s8 *) arg0 + 0x1C738)), void **, 0x28) = arg1;
}
