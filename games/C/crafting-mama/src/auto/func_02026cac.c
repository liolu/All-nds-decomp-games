/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

s32 func_020114b0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0201599c(s32);                         /* extern */
M2C_UNK func_02027348();                            /* extern */
M2C_UNK func_02027360();                            /* extern */
extern M2C_UNK data_0209761c;

void func_02026cac(s32 arg0) {
    u16 temp_r0;
    u16 temp_r0_2;

    if (func_020114b0(arg0, 0) == 0) {
        temp_r0 = ~(1 << arg0);
        func_02027348();
        M2C_FIELD(&data_0209761c, u16 *, 2)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 2) & temp_r0);
        M2C_FIELD(&data_0209761c, u16 *, 4)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 4) & temp_r0);
        M2C_FIELD(&data_0209761c, u16 *, 6)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 6) & temp_r0);
        M2C_FIELD(&data_0209761c, u16 *, 8)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 8) & temp_r0);
        M2C_FIELD(&data_0209761c, u16 *, 0xA) = (u16) (M2C_FIELD(&data_0209761c, u16 *, 0xA) & temp_r0);
        M2C_FIELD(&data_0209761c, u16 *, 0xC) = (u16) (M2C_FIELD(&data_0209761c, u16 *, 0xC) & temp_r0);
        func_02027360();
        func_0201599c(arg0);
        return;
    }
    func_02027348();
    temp_r0_2                             = ~(1 << arg0);
    M2C_FIELD(&data_0209761c, u16 *, 2)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 2) & temp_r0_2);
    M2C_FIELD(&data_0209761c, u16 *, 6)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 6) & temp_r0_2);
    M2C_FIELD(&data_0209761c, u16 *, 4)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 4) & temp_r0_2);
    M2C_FIELD(&data_0209761c, u16 *, 8)   = (u16) (M2C_FIELD(&data_0209761c, u16 *, 8) & temp_r0_2);
    M2C_FIELD(&data_0209761c, u16 *, 0xA) = (u16) (M2C_FIELD(&data_0209761c, u16 *, 0xA) & temp_r0_2);
    M2C_FIELD(&data_0209761c, u16 *, 0xC) = (u16) (M2C_FIELD(&data_0209761c, u16 *, 0xC) & temp_r0_2);
    func_02027360();
}
