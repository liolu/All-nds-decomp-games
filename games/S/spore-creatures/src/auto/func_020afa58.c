#include "m2c.h"

M2C_UNK func_020afbbc();                            /* extern */
extern M2C_UNK *data_020e030c;
extern M2C_UNK *data_020e0310;
extern M2C_UNK data_020f187c;
extern M2C_UNK func_020afaac;
extern M2C_UNK func_020afb78;

void func_020afa58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_020f187c, s32 *, 8)    = arg0;
    M2C_FIELD(&data_020f187c, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_020f187c, s32 *, 0x10) = arg2;
    func_020afbbc();
    if (arg3 == 0) {
        return;
    }
    data_020e030c = &func_020afaac;
    data_020e0310 = &func_020afb78;
}
