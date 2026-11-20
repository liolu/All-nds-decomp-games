/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02073864(void *, M2C_UNK *, s32);      /* extern */
extern M2C_UNK data_020be71c;

void func_02019da4(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x2C)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    if (arg1 == 0) {
        M2C_FIELD(arg0, s8 *, 0x34) = 0;
        return;
    }
    func_02073864(arg0 + 0x34, &data_020be71c, M2C_FIELD(arg0, s32 *, 0x2C));
}
