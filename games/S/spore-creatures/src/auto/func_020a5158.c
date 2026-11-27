#include "m2c.h"

s32 func_020a5200(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_020b1128(s32, s32, s32, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_020b75ec(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_027e033c;
extern M2C_UNK data_027e0344;

void func_020a5158(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10C);
    if (temp_r0 & 4) {
        M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (temp_r0 & ~4);
        func_020b1128(M2C_FIELD(arg0, s32 *, 8) << 0xC, (M2C_FIELD(arg0, s32 *, 0x10) + 1) << 0xC,
                      M2C_FIELD(arg0, s32 *, 4) << 0xC, (M2C_FIELD(arg0, s32 *, 0xC) + 1) << 0xC,
                      M2C_FIELD(arg0, s32 *, 0x110), M2C_FIELD(arg0, s32 *, 0x114), 0x1000, arg0 + 0x118);
    }
    func_020b75ec(func_020a5200(arg0, arg1, 1), &data_027e0344, 0x40);
    M2C_FIELD(&data_027e033c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e033c, s32 *, 0xFC) & ~0x50);
}
