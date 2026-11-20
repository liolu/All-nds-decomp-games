#include "m2c.h"

M2C_UNK func_0201c004(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02077cec();                            /* extern */
M2C_UNK func_0208e98c(s32);                         /* extern */
extern M2C_UNK func_0208ead0;

s32 func_02077ab0(s32 arg0) {
    func_02077cec();
    func_0208e98c(arg0 + 0x314);
    func_0201c004(arg0 + 0x3C, 0x1A, 0x1C, &func_0208ead0);
    return arg0;
}
