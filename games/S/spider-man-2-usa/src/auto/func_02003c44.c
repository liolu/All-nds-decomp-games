/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000dac(s32, s32);                    /* extern */
M2C_UNK func_02000db4(s32, s32);                    /* extern */
M2C_UNK func_02002c1c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020678b4;

void func_02003c44(void *arg0) {
    func_02002c1c(arg0, 8, 0, 0);
    func_02000db4(M2C_FIELD(arg0, s32 *, 0x2F0) + 0x1C, M2C_FIELD(&data_020678b4, s32 *, 0xA0));
    func_02000dac(M2C_FIELD(arg0, s32 *, 0x2F0) + 0x1C, M2C_FIELD(&data_020678b4, s32 *, 0xA4));
    M2C_FIELD(arg0, s32 *, 0x370) = 0x11;
}
