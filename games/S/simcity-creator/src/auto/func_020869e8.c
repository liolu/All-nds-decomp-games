#include "m2c.h"

M2C_UNK func_0201c004(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02086bfc(s32);                         /* extern */
extern M2C_UNK func_0208693c;

s32 func_020869e8(s32 arg0) {
    func_0201c004(arg0 + 0x10, 4, 0x10, &func_0208693c);
    func_02086bfc(arg0 + 4);
    return arg0;
}
