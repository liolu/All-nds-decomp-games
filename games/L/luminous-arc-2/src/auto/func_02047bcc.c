#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202b238(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_0202b298(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020f0e50;
extern M2C_UNK data_020f0e78;

void func_02047bcc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, u8 arg5) {
    u8 sp0[64];

    if (arg5 & 1) {
        func_0201b0f4(sp0, &data_020f0e50, arg0);
        func_0202b238(sp0, arg4, arg1);
    }
    if (!(arg5 & 2)) {
        return;
    }
    func_0201b0f4(sp0, &data_020f0e78, arg0);
    func_0202b298(sp0, arg4, arg2, arg3);
}
