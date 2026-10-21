#include "m2c.h"

M2C_UNK func_0208ac00(M2C_UNK);                     /* extern */
void *func_02090a40();                              /* extern */
M2C_UNK func_020c1cbc(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0211d6e8;
extern M2C_UNK data_0211d6f0;
extern M2C_UNK data_0211d6fc;
extern M2C_UNK data_0211d708;
extern M2C_UNK data_0211d714;

void func_0208af9c(s8 arg0, s8 arg1, s32 arg2, s32 arg3) {
    func_0208ac00(0);
    M2C_FIELD(func_02090a40(), s8 *, 0x15)   = arg0;
    M2C_FIELD(func_02090a40(), s8 *, 0x16)   = arg1;
    M2C_FIELD(func_02090a40(), s32 *, 0x464) = arg2;
    M2C_FIELD(func_02090a40(), s32 *, 0x468) = arg3;
    M2C_FIELD(func_02090a40(), s8 *, 0x17D)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x2D0)  = 0;
    func_020c1cbc(0x32, &data_0211d6e8);
    func_020c1cbc(0x33, &data_0211d6f0);
    func_020c1cbc(0x34, &data_0211d6fc);
    func_020c1cbc(0x35, &data_0211d708);
    func_020c1cbc(0x36, &data_0211d714);
}
