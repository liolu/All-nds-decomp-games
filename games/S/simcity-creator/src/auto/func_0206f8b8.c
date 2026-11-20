#include "m2c.h"

M2C_UNK func_0201c004(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02074e54(s32);                         /* extern */
extern M2C_UNK func_0206f21c;

s32 func_0206f8b8(s32 arg0) {
    func_0201c004(arg0 + 0x5A234, 0x15, 0x10, &func_0206f21c);
    func_02074e54(arg0 + 0x5A1E8);
    func_0201c004(arg0 + 0x5A164, 8, 0x10, &func_0206f21c);
    func_0203491c(arg0);
    return arg0;
}
