/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f160(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_0200fa5c(s16);                         /* extern */
s16 func_0200ff08(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0201381c();                                /* extern */
extern M2C_UNK data_02109884;

void func_020c3784(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 0) = func_0200ff08(func_0200f160(arg1, &data_02109884), 1, 0, 0);
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0));
    M2C_FIELD(arg0, s32 *, 4) = func_0201381c();
}
