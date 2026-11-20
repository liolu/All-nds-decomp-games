#include "m2c.h"

M2C_UNK func_020014e0(M2C_UNK);                     /* extern */
M2C_UNK func_0202347c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020234a8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020234d4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02023508(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02090ba4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090cb8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090cf8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090d2c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090d6c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020236d8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x62E4) = arg1;
    func_02090ba4(arg1, 0);
    func_020014e0(0);
    M2C_FIELD((void *) 0x04001008, u16 *, 0) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~3) | 1);
    M2C_FIELD((void *) 0x04001008, u16 *, 2) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 2) & ~3) | 1);
    M2C_FIELD((void *) 0x04001008, u16 *, 4) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 4) & ~3) | 1);
    M2C_FIELD((void *) 0x04001008, u16 *, 6) = (u16) (M2C_FIELD((void *) 0x04001008, u16 *, 6) & ~3);
    func_02090cb8(M2C_FIELD(arg0, s32 *, 0x62E4), 0, 0);
    func_02090cf8(M2C_FIELD(arg0, s32 *, 0x62E4), 0, 0);
    func_02090d2c(M2C_FIELD(arg0, s32 *, 0x62E4), 0, 0);
    func_02090d6c(M2C_FIELD(arg0, s32 *, 0x62E4), 0, 0);
    M2C_FIELD((void *) 0x04001010, s32 *, 0)   = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 4)   = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 8)   = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 0xC) = 0;
    func_02023508(0, 0, 0, 1, 0);
    func_020234d4(0, 0, 2, 1, 0);
    func_020234a8(0, 0, 4, 1);
    func_0202347c(0, 0, 6, 6);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1900;
}
