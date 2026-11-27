#include "m2c.h"

M2C_UNK func_020b0fdc(s32, s32, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_020b75ec(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern M2C_UNK data_027e033c;
extern M2C_UNK data_027e0344;

void func_020a4eac(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10C);
    if (temp_r0 & 2) {
        M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (temp_r0 & ~2);
        func_020b0fdc(M2C_FIELD(arg0, s32 *, 0x11C), M2C_FIELD(arg0, s32 *, 0x120), M2C_FIELD(arg0, s32 *, 0x118),
                      M2C_FIELD(arg0, s32 *, 0x110), M2C_FIELD(arg0, s32 *, 0x114), M2C_FIELD(arg0, s32 *, 0x124),
                      arg0 + 0x128);
    }
    func_020b75ec(arg0 + 0x128, &data_027e0344, 0x40);
    M2C_FIELD(&data_027e033c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e033c, s32 *, 0xFC) & ~0x50);
}
