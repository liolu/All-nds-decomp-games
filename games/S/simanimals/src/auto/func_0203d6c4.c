#include "m2c.h"

M2C_UNK func_02047c50(s32);                         /* extern */
M2C_UNK func_0201becc(s32);                         /* extern */
M2C_UNK func_0201f6e0(s32);                         /* extern */
M2C_UNK func_0201becc(s32);                         /* extern */
M2C_UNK func_020760f8(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02046644;

s32 func_0203d6c4(s32 arg0) {
    func_020760f8(arg0 + 0x17C, 4, 0xA0, &func_02046644);
    func_0201becc(arg0 + 0xE4);
    func_0201becc(arg0 + 0x4C);
    func_0201f6e0(arg0);
    func_02047c50(arg0);
    return arg0;
}
