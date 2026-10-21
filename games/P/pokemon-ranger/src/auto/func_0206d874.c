#include "m2c.h"

M2C_UNK func_0206dc88();                            /* extern */
s32 func_020c14ac(s32, u32);                        /* extern */

void func_0206d874(void *arg0) {
    u32 temp_r0;

    func_0206dc88();
    M2C_FIELD(arg0, s32 *, 0x2C0) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x2C0) - func_020c14ac(M2C_FIELD(arg0, s32 *, 0x2C0), M2C_FIELD(arg0, u32 *, 0x340)));
    M2C_FIELD(arg0, s32 *, 0x2C4) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x2C4) - func_020c14ac(M2C_FIELD(arg0, s32 *, 0x2C4), M2C_FIELD(arg0, u32 *, 0x340)));
    M2C_FIELD(arg0, s32 *, 0x2C8) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x2C8) - func_020c14ac(M2C_FIELD(arg0, s32 *, 0x2C8), M2C_FIELD(arg0, u32 *, 0x340)));
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x340);
    if (temp_r0 > 1U) {
        M2C_FIELD(arg0, u32 *, 0x340) = (u32) (temp_r0 - 1);
    }
}
