/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048d2c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02082848;

void func_02024034(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
        return;
    }
    func_02048d2c(arg0 + 0xC, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(&data_02082848, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(&data_02082848, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(&data_02082848, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(&data_02082848, s32 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x3C)  = 0U;
}
