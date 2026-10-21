#include "m2c.h"

M2C_UNK func_0204da18(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02057510(s32);                         /* extern */
extern M2C_UNK data_020b0948;

void func_020580c0(void *arg0) {
    func_02057510(M2C_FIELD(arg0, s32 *, 0x48));
    func_0204da18(&data_020b0948, arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & ~1);
}
