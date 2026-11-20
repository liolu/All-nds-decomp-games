#include "m2c.h"

M2C_UNK func_0201bf54(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02077ae4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207dfa0();                            /* extern */
M2C_UNK func_0208e97c(s32);                         /* extern */
extern M2C_UNK func_0208eac0;
extern M2C_UNK func_0208ead0;

s32 func_02077a60(s32 arg0, M2C_UNK arg1) {
    func_0207dfa0();
    func_0201bf54(arg0 + 0x3C, 0x1A, 0x1C, &func_0208eac0, &func_0208ead0);
    func_0208e97c(arg0 + 0x314);
    func_02077ae4(arg0, arg1);
    return arg0;
}
