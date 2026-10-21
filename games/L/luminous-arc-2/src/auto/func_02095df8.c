#include "m2c.h"

M2C_UNK func_020052bc(M2C_UNK *, s32);              /* extern */
extern s32 data_0211d7c8;
extern M2C_UNK data_02170eac;
extern M2C_UNK data_02170f6c;

void func_02095df8(s32 arg0) {
    data_0211d7c8 = arg0;
    func_020052bc(&data_02170f6c, arg0);
    func_020052bc(&data_02170eac, arg0);
}
