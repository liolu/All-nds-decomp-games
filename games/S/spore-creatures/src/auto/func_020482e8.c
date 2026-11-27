#include "m2c.h"

M2C_UNK func_02001af0(s32, s32);                    /* extern */
M2C_UNK func_0204699c(void *);                      /* extern */
M2C_UNK func_02048090(void *, M2C_UNK);             /* extern */
M2C_UNK func_020483ec(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020488a4(s32, void *, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_02055b54(void *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
M2C_UNK func_ov006_0215aa4c(M2C_UNK *);             /* extern */
extern s32 data_020e0ba0;

void func_020482e8(void *arg0, s32 arg1) {
    u8 sp4[8];
    s32 temp_r0;
    s32 temp_r2;

    if (M2C_FIELD(arg0, u8 *, 0x195) != 0) {
        return;
    }
    temp_r2                       = M2C_FIELD(arg0, s32 *, 0x190) - arg1;
    M2C_FIELD(arg0, s32 *, 0x190) = temp_r2;
    if (temp_r2 <= 0) {
        func_02048090(arg0, 1);
        func_020483ec(sp4, arg0);
        func_ov006_0215aa4c(sp4);
        func_02001af0(data_020e0ba0 + 0xC, 0x87624CA8);
        func_0204699c(arg0);
    } else if (M2C_FIELD(arg0, s32 *, 0x188) == 0x1113C4D3) {
        if (temp_r2 == 2) {
            func_02055b54(arg0 + 0xE4, 0, 0x18AE, 0);
        } else if (temp_r2 == 1) {
            func_02055b54(arg0 + 0xE4, 0, 0x18AF, 0);
        }
    }
    temp_r0 = func_02093480(0x68);
    if (temp_r0 == 0) {
        return;
    }
    func_020488a4(temp_r0, arg0, 0 - arg1, 1, 0);
}
