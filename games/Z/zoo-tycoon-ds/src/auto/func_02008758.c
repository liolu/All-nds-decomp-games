/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020019e0();                         /* extern */

void func_02008758(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x6C) != 0) {
        func_020019e0(M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        func_020019e0(M2C_FIELD(arg0, s32 *, 0x4C));
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x5C) != 0) {
        func_020019e0(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        func_020019e0(M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0) {
        func_020019e0();
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        func_020019e0();
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
        return;
    }
    func_020019e0();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}
