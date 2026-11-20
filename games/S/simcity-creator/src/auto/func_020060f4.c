#include "m2c.h"

M2C_UNK func_02004164(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020042a8(M2C_UNK);                     /* extern */
M2C_UNK func_020060d8(M2C_UNK);                     /* extern */
extern M2C_UNK data_020d0f98;
extern M2C_UNK func_0200617c;

void func_020060f4(void) {
    if (M2C_FIELD(&data_020d0f98, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d0f98, u16 *, 0) = 1U;
    func_020060d8(0);
    M2C_FIELD(&data_020d0f98, s32 *, 8)       = 0;
    M2C_FIELD(&data_020d0f98, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_02004164(8, &func_0200617c);
    func_020042a8(8);
    M2C_FIELD(&data_020d0f98, s32 *, 4) = 0;
}
