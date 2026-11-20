/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e90(void *, s32);                 /* extern */
extern M2C_UNK data_02082548;

void func_0201c60c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = 4;
    func_02000e90(arg0 + 0x60, (M2C_FIELD(arg0, s32 *, 0xA8) * 0x18) + (s32) &data_02082548 + 0xC);
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}
