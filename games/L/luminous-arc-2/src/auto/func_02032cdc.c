#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0202b30c(M2C_UNK *, u16, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020f0008;
extern M2C_UNK data_020f0028;
extern M2C_UNK data_020f0048;
extern M2C_UNK data_020f0068;
extern M2C_UNK data_020f0088;

void func_02032cdc(s32 arg0, u32 arg1, s32 arg2, M2C_UNK arg3) {
    u8 sp0[64];

    switch (arg1) {
        default:
            break;
        case 0:
            func_0201b0f4(sp0, &data_020f0008);
            break;
        case 1:
            func_0201b0f4(sp0, &data_020f0028);
            break;
        case 2:
            func_0201b0f4(sp0, &data_020f0048);
            break;
        case 3:
            func_0201b0f4(sp0, &data_020f0068);
            break;
        case 4:
            func_0201b0f4(sp0, &data_020f0088);
            break;
    }
    if (arg0 & 1) {
        func_0202b30c(sp0, *(u16 *) 0x04000008, arg3, 0x100);
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_0202b30c(sp0, *(u16 *) 0x04001008 | 0x80000000, arg3, 0x100);
}
