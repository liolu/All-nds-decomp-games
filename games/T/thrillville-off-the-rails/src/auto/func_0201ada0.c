/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02021194(M2C_UNK, void *, M2C_UNK);    /* extern */
extern void *data_020ec10c;

void func_0201ada0(s32 arg0) {
    s32 temp_r1;
    s32 temp_r4;

    temp_r4                                            = ~(1 << arg0);
    M2C_FIELD(data_020ec10c, u16 *, 2)                 = (u16) (M2C_FIELD(data_020ec10c, u16 *, 2) & temp_r4);
    temp_r1                                            = arg0 * 0x590;
    M2C_FIELD(data_020ec10c, u16 *, 4)                 = (u16) (M2C_FIELD(data_020ec10c, u16 *, 4) & temp_r4);
    M2C_FIELD((data_020ec10c + temp_r1), s32 *, 0x590) = 0;
    M2C_FIELD((data_020ec10c + temp_r1), s32 *, 0x594) = 0;
    M2C_FIELD((data_020ec10c + temp_r1), s16 *, 0x598) = 0;
    M2C_FIELD((data_020ec10c + temp_r1), s16 *, 0x59C) = 0;
    func_02021194(0, data_020ec10c + 0x10 + temp_r1, 0x4C0);
}
