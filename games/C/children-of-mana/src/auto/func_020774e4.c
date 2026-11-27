/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f160(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s16 func_0200ff08(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02077744(void *);                      /* extern */
extern M2C_UNK data_020ff3bc;

void func_020774e4(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 4)    = func_0200f270(0x18, 0);
    M2C_FIELD(arg0, s16 *, 0x14) = func_0200ff08(func_0200f160(arg1, &data_020ff3bc), 1, 0, 0);
    func_02077744(arg0);
}
