#include "m2c.h"

M2C_UNK func_020014e0(M2C_UNK);                     /* extern */
M2C_UNK func_020a5ab8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020a5ef8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020a5f20(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020a5f48(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020a5e40(void) {
    func_020014e0(5);
    M2C_FIELD((void *) 0x04001008, u16 *, 0) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~3) | 1);
    M2C_FIELD((void *) 0x04001008, u16 *, 2) = (u16) (M2C_FIELD((void *) 0x04001008, u16 *, 2) & ~3);
    M2C_FIELD((void *) 0x04001008, u16 *, 4) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 4) & ~3) | 2);
    M2C_FIELD((void *) 0x04001008, u16 *, 6) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 6) & ~3) | 2);
    func_020a5f48(0, 0, 0xC, 0, 0);
    func_020a5ab8(0, 0, 0xE, 6, 0);
    func_020a5f20(0, 0, 2);
    func_020a5ef8(0, 0, 4);
    *(s32 *) 0x04001000 &= ~0x1F00;
}
