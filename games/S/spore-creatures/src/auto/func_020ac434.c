#include "m2c.h"

M2C_UNK func_01ff852c(s32, s32 *, M2C_UNK);         /* extern */
extern M2C_UNK data_027e033c;
extern s32 data_027e0340;
extern s32 data_027e0388;

void func_020ac434(void) {
    s32 sp0;

    func_01ff852c(0x1610, &data_027e0340, 0x11);
    func_01ff852c(0x19, &data_027e0388, 0xC);
    sp0 = 2;
    func_01ff852c(0x10, &sp0, 1);
    func_01ff852c(0x15, NULL, 0);
    M2C_FIELD(&data_027e033c, s32 *, 0xFC) = (s32) ((M2C_FIELD(&data_027e033c, s32 *, 0xFC) & ~1) | 2);
}
