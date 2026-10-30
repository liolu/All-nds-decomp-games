#include "m2c.h"

s32 func_0201c650();                                /* extern */
M2C_UNK func_020536c8(s32);                         /* extern */
M2C_UNK func_020536d8(s32);                         /* extern */
s32 func_02053878(s32);                             /* extern */
M2C_UNK func_02054804();                            /* extern */
M2C_UNK func_0206b4ac(s32);                         /* extern */
M2C_UNK func_020ad854(void *, s32);                 /* extern */
M2C_UNK func_020ade44();                            /* extern */
M2C_UNK func_020afa48(s32, u32, s32);               /* extern */
M2C_UNK func_020afaa0(s32);                         /* extern */
s32 func_020b11f8();                                /* extern */
extern M2C_UNK data_020c4eac;

s32 func_020ad8cc(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = func_02053878(M2C_FIELD(arg0, s32 *, 8));
    if (((s32) M2C_FIELD(arg0, s32 *, 0x14) >= 2) &&
        ((func_020536d8(M2C_FIELD(arg0, s32 *, 8)), (func_020b11f8() != 0)) ||
         (func_020536c8(M2C_FIELD(arg0, s32 *, 8)), ((func_0201c650() & 1) != 0)))) {
        func_020afaa0(temp_r4);
        return 1;
    }
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (temp_r0 <= 0) {
        do {
            temp_r0_3                    = M2C_FIELD(arg0, s32 *, 0x14) + 1;
            M2C_FIELD(arg0, s32 *, 0x14) = temp_r0_3;
            if (temp_r0_3 >= 0xD) {
                M2C_FIELD(arg0, s32 *, 0x14) = 5;
            }
            temp_r0_2                    = *((M2C_UNK *) ((s8 *) &data_020c4eac + (M2C_FIELD(arg0, s32 *, 0x14) * 4)));
            M2C_FIELD(arg0, s32 *, 0x18) = temp_r0_2;
        } while (temp_r0_2 == 0);
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r1 < 0xD) {
            func_020ad854(arg0, temp_r1 - 1);
            if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
                func_0206b4ac(M2C_FIELD(arg0, s32 *, 0xC));
                func_02054804();
                func_020ade44();
            }
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) >= 1) {
        var_r1                       = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = var_r1;
        if (var_r1 >= 0x20) {
            var_r1 = (var_r1 - 0x20) & 0x1F;
            if (var_r1 < 0x10) {
                var_r1 = 0x1F - var_r1;
            }
        }
        func_020afa48(temp_r4, (u32) var_r1, 0xF - ((s32) (var_r1 + ((u32) var_r1 >> 0x1F)) >> 1));
    }
    return 0;
}
