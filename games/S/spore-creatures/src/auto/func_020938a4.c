#include "m2c.h"

M2C_UNK func_0209b82c(M2C_UNK, u8);                 /* extern */
M2C_UNK func_0209b858(M2C_UNK, s32);                /* extern */
M2C_UNK func_0209b868(M2C_UNK, u8);                 /* extern */
M2C_UNK func_0209b884(M2C_UNK, u8);                 /* extern */
M2C_UNK func_0209b8f8(M2C_UNK, u8);                 /* extern */
M2C_UNK func_0209b910(M2C_UNK, s32, u8);            /* extern */

void func_020938a4(void *arg0, M2C_UNK arg1) {
    func_0209b858(arg1, M2C_FIELD(arg0, s32 *, 0x20));
    func_0209b884(arg1, M2C_FIELD(arg0, u8 *, 0x2F));
    func_0209b82c(arg1, M2C_FIELD(arg0, u8 *, 0x32));
    func_0209b910(arg1, 0xFFFF, M2C_FIELD(arg0, u8 *, 0x2E));
    func_0209b8f8(arg1, M2C_FIELD(arg0, u8 *, 0x34));
    func_0209b868(arg1, M2C_FIELD(arg0, u8 *, 0x33));
}
