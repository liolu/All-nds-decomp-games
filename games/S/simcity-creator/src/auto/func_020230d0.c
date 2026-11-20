#include "m2c.h"

M2C_UNK func_02022a08(s32);                         /* extern */
extern M2C_UNK data_020c8210;

M2C_UNK **func_020230d0(M2C_UNK **arg0) {
    s32 base = (s32) arg0;
    *arg0    = &data_020c8210;
    func_02022a08((M2C_UNK *) (base + 4));
    return arg0;
}
