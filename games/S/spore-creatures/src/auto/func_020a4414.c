#include "m2c.h"

M2C_UNK func_02082598();                            /* extern */
M2C_UNK func_020a44f0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020a4a98();                            /* extern */
M2C_UNK func_020b1830();                            /* extern */
M2C_UNK func_020b32d0(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020e9ba0;

void func_020a4414(void) {
    M2C_FIELD(&data_020e9ba0, s32 *, 4) = 0;
    M2C_FIELD(&data_020e9ba0, s32 *, 0) = -1;
    func_02082598();
    M2C_FIELD((void *) 0x04000060, u16 *, 0)     = (u16) ((M2C_FIELD((void *) 0x04000060, u16 *, 0) & 0xFFFFCFFD) | 2);
    M2C_FIELD((void *) 0x04000060, u16 *, 0)     = (u16) ((M2C_FIELD((void *) 0x04000060, u16 *, 0) & ~0x3000) | 0x10);
    M2C_FIELD((void *) 0x04000060, s16 *, -0x10) = 0;
    M2C_FIELD((void *) 0x04000060, s32 *, 0x4E0) = 3;
    M2C_FIELD((void *) 0x04000060, u16 *, 0)     = (u16) (M2C_FIELD((void *) 0x04000060, u16 *, 0) & 0xCFFB);
    M2C_FIELD((void *) 0x04000060, u16 *, 0)     = (u16) ((M2C_FIELD((void *) 0x04000060, u16 *, 0) & ~0x3000) | 8);
    M2C_FIELD((void *) 0x04000060, s32 *, 0x520) = 0xBFFF0000;
    func_020b1830();
    *(s32 *) 0x04001000 |= 0x10000;
    func_020a4a98();
    func_020a44f0(9, 0, 0);
    func_020b32d0(0, 0x1F, 0x7FFF, 0x3F, 0);
}
