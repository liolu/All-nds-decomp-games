/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020245c0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0202aa30(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_021605c4;

void func_020235d8(void *arg0, s32 arg1) {
    M2C_FIELD(&data_021605c4, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x298);
    M2C_FIELD(&data_021605c4, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x29C);
    M2C_FIELD(&data_021605c4, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x28C);
    M2C_FIELD(arg0, s32 *, 0x38C)          = arg1;
    M2C_FIELD(arg0, s32 *, 0x388)          = 0x17;
    func_020245c0(arg0, 0xC, 0);
    func_0202aa30(arg0, 0xC, 0);
}
