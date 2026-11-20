/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033664(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021169d4;

void func_0202ca48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) ((M2C_FIELD(arg0, s32 *, 0x3C) * 0x350) + (s32) &data_021169d4);
    if (M2C_FIELD(arg0, u8 *, 0x34) == 0) {
        return;
    }
    func_02033664(M2C_FIELD(arg0, s32 *, 0x40) + 0x310, 1);
}
