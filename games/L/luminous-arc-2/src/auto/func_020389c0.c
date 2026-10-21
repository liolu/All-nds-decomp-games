#include "m2c.h"

M2C_UNK func_0200175c();   /* extern */
extern M2C_UNK data_0216bc50;

void func_020389c0(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xDC) == 0) {
        if ((M2C_FIELD(&data_0216bc50, u8 *, 4) & 1) && (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), u8 *, 0x11E) == 0)) {
            func_0200175c(6, 0, 0);
        }
        if ((M2C_FIELD(&data_0216bc50, u8 *, 4) & 2) && (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), u8 *, 0x11F) == 0)) {
            *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1000;
        }
    } else {
        if ((M2C_FIELD(&data_0216bc50, u8 *, 4) & 1) && (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), u8 *, 0x11E) == 0)) {
            func_0200175c(2, 0, 0);
        }
        if ((M2C_FIELD(&data_0216bc50, u8 *, 4) & 2) && (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), u8 *, 0x11F) == 0)) {
            *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0x400);
        }
    }
    M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xDC) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_0216bc50, void **, 0), s32 *, 0xDC) ^ 1);
}
