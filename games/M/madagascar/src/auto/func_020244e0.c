/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048d00();                            /* extern */
extern M2C_UNK data_02082848;

void func_020244e0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_02048d00();
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(&data_02082848, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(&data_02082848, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(&data_02082848, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(&data_02082848, s32 *, 0xC);
    M2C_FIELD(arg0, s8 *, 0x3C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
}
