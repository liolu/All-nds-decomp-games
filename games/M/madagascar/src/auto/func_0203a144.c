/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e50(void *, s32);                 /* extern */
M2C_UNK func_02000e58(void *, M2C_UNK);             /* extern */
M2C_UNK func_02000e60(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020c38b0;

void *func_0203a144(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c38b0;
    M2C_FIELD(arg0, u8 *, 0x1C)    = arg1;
    func_02000e60(arg0 + 4, 0);
    func_02000e58(arg0 + 4, 0x18);
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 0) {
        func_02000e50(arg0 + 4, 0xFFFFF001);
    } else {
        func_02000e50(arg0 + 4, 0xFFF);
    }
    return arg0;
}
