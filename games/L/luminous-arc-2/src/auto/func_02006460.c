#include "m2c.h"

M2C_UNK func_02004334(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02004504(M2C_UNK);                     /* extern */
M2C_UNK func_02006424(M2C_UNK);                     /* extern */
extern M2C_UNK data_02147c38;
extern M2C_UNK func_020064e8;

void func_02006460(void) {
    if (M2C_FIELD(&data_02147c38, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02147c38, u16 *, 0) = 1U;
    func_02006424(0);
    M2C_FIELD(&data_02147c38, s32 *, 8)       = 0;
    M2C_FIELD(&data_02147c38, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_02004334(8, &func_020064e8);
    func_02004504(8);
    M2C_FIELD(&data_02147c38, s32 *, 4) = 0;
}
