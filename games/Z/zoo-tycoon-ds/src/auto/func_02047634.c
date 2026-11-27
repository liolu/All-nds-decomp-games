/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004ca4(); /* extern */
s32 func_02006380();                             /* extern */
M2C_UNK func_020064a8(); /* extern */
M2C_UNK func_02047788();                      /* extern */

void func_02047634(void *arg0) {
    u8 temp_r3;

    if (func_02006380(arg0 + 0x38) == 0) {
        func_02047788(arg0);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0xB4) = (u16) (M2C_FIELD(arg0, u16 *, 0xB4) + 1);
    func_02047788(arg0);
    if (M2C_FIELD(arg0, u16 *, 0xB4) == 0xC8) {
        M2C_FIELD(arg0, u8 *, 0xB3) = (u8) (M2C_FIELD(arg0, u8 *, 0xB3) + 1);
        if ((u32) M2C_FIELD(arg0, u8 *, 0xB3) >= 0x14U) {
            M2C_FIELD(arg0, s8 *, 0xB2) = 1;
        } else {
            func_020064a8(arg0 + 0x38, 0, 0x50, 0x22, 0x3D);
        }
    }
    if (M2C_FIELD(arg0, u16 *, 0xB4) == 0x118) {
        temp_r3 = M2C_FIELD(arg0, u8 *, 0xB3);
        func_02004ca4(0x20, 0x18, 0, 0, 0, 0, 0, 0xD, 0, (s32) (u16) (temp_r3 + 0x114), 0x06008000,
                      (s32) (u16) (temp_r3 + 0x178), 0x05000000, 0, (s32) (u16) (temp_r3 + 0x98), 0x0601F000);
        func_020064a8(arg0 + 0x38, 0x10, 0x50, 0x22, 0x3D);
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xB4) >= 0x168U) {
        M2C_FIELD(arg0, u16 *, 0xB4) = 0U;
    }
}
