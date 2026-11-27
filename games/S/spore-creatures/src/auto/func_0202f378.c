#include "m2c.h"

M2C_UNK func_020abf74(s32, s32);                    /* extern */
M2C_UNK func_020ac144(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020ac310(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_020ac39c(s32, s32);                    /* extern */
s32 func_020ac3a4(s32);                             /* extern */
extern M2C_UNK data_020dea08;

s32 func_0202f378(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_020abf74(arg0, arg2 + 0x20);
    func_020ac310(arg1, func_020ac3a4(arg0), arg2);
    func_020ac39c(arg0, arg2);
    func_020ac144(arg0, &data_020dea08);
    return arg0;
}
