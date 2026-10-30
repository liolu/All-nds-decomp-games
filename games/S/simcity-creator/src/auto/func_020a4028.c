#include "m2c.h"

s32 func_020a40cc(void *, s16, s16);                /* extern */
M2C_UNK func_020a45c0();                            /* extern */
M2C_UNK func_020a4720(void *, s16, s16);            /* extern */

void func_020a4028(void *arg0) {
    s16 temp_r4;

    temp_r4 = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x5510C);
    if (M2C_FIELD(arg0, u8 *, 0x48) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s16 *, 0x34));
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, s16 *, 0x36));
    M2C_FIELD(arg0, s32 *, 0x18) = 0x101000;
    func_020a45c0(arg0);
    M2C_FIELD(arg0, s16 *, 0x32) = (s16) (M2C_FIELD(arg0, s16 *, 0x32) + (-0x14 << temp_r4));
    func_020a4720(arg0, M2C_FIELD(arg0, s16 *, 0x24), M2C_FIELD(arg0, s16 *, 0x26));
    if (func_020a40cc(arg0, M2C_FIELD(arg0, s16 *, 0x28), M2C_FIELD(arg0, s16 *, 0x2A)) == 0) {
        M2C_FIELD(arg0, u8 *, 0x48) = 0U;
    }
}
