#include "m2c.h"

M2C_UNK func_02021930();                            /* extern */
extern s16 data_020838c4;
extern s16 data_02093ec8;

void func_0200d9a8(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020838c4       = 0;
    data_02093ec8       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
    func_02021930();
}
