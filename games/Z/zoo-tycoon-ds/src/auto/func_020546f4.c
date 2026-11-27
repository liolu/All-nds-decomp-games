/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020017e4(M2C_UNK);                     /* extern */
M2C_UNK func_02003e80(void *, M2C_UNK);             /* extern */
s32 func_02006380(void *);                          /* extern */
M2C_UNK func_02054374(void *);                      /* extern */
extern M2C_UNK data_020cdb18;
extern u16 data_020ce124;
extern M2C_UNK data_020ce12c;

void func_020546f4(void *arg0) {
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x220) == 0) {
        return;
    }
    if (func_02006380(arg0 + 0x38) == 0) {
        return;
    }
    temp_r4 = ((u8 *) &data_020cdb18)[M2C_FIELD(arg0, u8 *, 0xB4)] - 1;
    func_02003e80(arg0 + 0xB8, 1);
    func_02003e80(arg0 + 0x16C, 1);
    temp_r1 = M2C_FIELD(arg0, u8 *, 0xB3);
    if (temp_r1 != 0) {
        if (data_020ce124 & 0x20) {
            M2C_FIELD(arg0, u8 *, 0xB3) = (u8) (temp_r1 - 1);
            func_020017e4(1);
            func_02054374(arg0);
        }
        func_02003e80(arg0 + 0xDC, 1);
        if ((u32) (M2C_FIELD(&data_020ce12c, s32 *, 0xC) & 0x3F) > 0xFU) {
            func_02003e80(arg0 + 0x124, 1);
        }
    }
    temp_r1_2 = M2C_FIELD(arg0, u8 *, 0xB3);
    if ((u32) temp_r1_2 >= (u32) temp_r4) {
        return;
    }
    if (data_020ce124 & 0x10) {
        M2C_FIELD(arg0, u8 *, 0xB3) = (u8) (temp_r1_2 + 1);
        func_020017e4(1);
        func_02054374(arg0);
    }
    func_02003e80(arg0 + 0x100, 1);
    if ((u32) (M2C_FIELD(&data_020ce12c, s32 *, 0xC) & 0x3F) <= 0xFU) {
        return;
    }
    func_02003e80(arg0 + 0x148, 1);
}
