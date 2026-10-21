#include "m2c.h"

u32 func_020aadbc();                                /* extern */
M2C_UNK func_020c1990(void *);                      /* extern */
M2C_UNK func_020c19f0(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_0212fb64;

void func_020c0318(void *arg0) {
    s32 temp_r3;
    u32 temp_r0;
    u32 temp_r3_2;

    temp_r0 = func_020aadbc();
    if (M2C_FIELD(arg0, s32 *, 0) == -1) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r3 > 0) && ((u32) (temp_r0 - M2C_FIELD(arg0, u32 *, 0xAC)) > 0x2710U)) {
        if (temp_r3 >= 4) {
            M2C_FIELD(arg0, s32 *, 0xB8) = 0;
            M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, M2C_UNK *, s32), 0x9C)(5, &data_0212fb64, M2C_FIELD(arg0, s32 *, 0x10C));
            return;
        }
        func_020c19f0(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) + 1);
        goto block_14;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xB4) != 0) && ((u32) (temp_r0 - M2C_FIELD(arg0, u32 *, 0xAC)) > 0x2710U)) {
        func_020c19f0(arg0, 1);
    } else {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xAC);
        if (((u32) (temp_r0 - temp_r3_2) > 0xEA60U) || (temp_r3_2 == 0) || (temp_r0 < temp_r3_2)) {
            func_020c19f0(arg0, 0);
        }
    }
block_14:
    if ((u32) (func_020aadbc() - M2C_FIELD(arg0, s32 *, 0xB0)) <= 0x4E20U) {
        return;
    }
    func_020c1990(arg0);
}
