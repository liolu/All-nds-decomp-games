#include "m2c.h"

M2C_UNK func_0202b72c(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020abf74();                            /* extern */
M2C_UNK func_020ac144(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_020dea0c;
extern s32 data_020e0cb4;

s32 func_0202f3cc(s32 arg0) {
    func_020abf74();
    func_0202b72c(data_020e0cb4, arg0, 1);
    func_020ac144(arg0, &data_020dea0c);
    return arg0;
}
