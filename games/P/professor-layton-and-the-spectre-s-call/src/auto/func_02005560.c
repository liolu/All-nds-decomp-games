#include "m2c.h"

s32 func_0201732c();                                /* extern */
M2C_UNK func_02017340(s32);                         /* extern */
M2C_UNK func_02000eac(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020324a4;

void func_02005560(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0201732c();
    func_02000eac(&data_020324a4, arg0);
    func_02017340(temp_r4);
}
