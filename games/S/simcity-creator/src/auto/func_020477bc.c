#include "m2c.h"

s32 func_0201cb08();                                /* extern */
M2C_UNK func_0201cb50();                            /* extern */
M2C_UNK func_0201d628(s32, s32);                    /* extern */
s32 func_0201f2c0();                                /* extern */
s32 func_0201f318();                                /* extern */
s32 func_0201f368();                                /* extern */
M2C_UNK func_0201f3bc(s32, s32);                    /* extern */
s32 func_02021308(s32, s32);                        /* extern */
M2C_UNK func_02021468();                            /* extern */
M2C_UNK func_020215ac();                            /* extern */
s32 func_02021600();                                /* extern */
s32 func_02053418(s32);                             /* extern */
s32 func_020537f8(s32 *);                           /* extern */

void func_020477bc(void *arg0, s32 *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;

    func_02053418(*arg1);
    func_020215ac();
    func_0201cb50();
    if (func_0201cb08() != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0 == 1) {
        func_020537f8(arg1);
        if (!(func_02021600() & 0xF8) && (func_02053418(*arg1), (func_0201f2c0() != 0)) &&
            (func_02053418(*arg1), (func_0201f318() != 0))) {
            func_020537f8(arg1);
            if (func_02021600() & 1) {
                func_02053418(*arg1);
                if (func_0201f368() != 0) {
                    func_02053418(*arg1);
                    if (func_0201f2c0() != 0) {
                        temp_r5 = *arg1;
                        func_0201d628(func_02053418(temp_r5), temp_r5);
                    } else {
                        M2C_FIELD(arg0, s32 *, 4)    = 5;
                        M2C_FIELD(arg0, s32 *, 0xC)  = 0;
                        M2C_FIELD(arg0, s32 *, 0x14) = 0;
                        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                        M2C_FIELD(arg0, s32 *, 0x30) = 1;
                        M2C_FIELD(arg0, s32 *, 0x34) = 1;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 4)    = 5;
                    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
                    M2C_FIELD(arg0, s32 *, 0x14) = 0;
                    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                    M2C_FIELD(arg0, s32 *, 0x30) = 1;
                    M2C_FIELD(arg0, s32 *, 0x34) = 1;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x10) = 4;
            }
        } else {
            func_02053418(*arg1);
            func_02021468();
            M2C_FIELD(arg0, s32 *, 0x10) = 4;
        }
    } else if ((u32) (temp_r0 - 2) <= 1U) {
        if (func_02021308(func_020537f8(arg1), M2C_FIELD(arg0, s32 *, 0x40)) != 0) {
            func_0201f3bc(func_02053418(*arg1), M2C_FIELD(arg0, s32 *, 0x40));
        } else {
            M2C_FIELD(arg0, s32 *, 4)    = 5;
            M2C_FIELD(arg0, s32 *, 0xC)  = 1;
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 5) {
        return;
    }
    temp_r0_2                    = M2C_FIELD(arg0, s32 *, 0x10) + 1;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0_2;
    if (temp_r0_2 >= 4) {
        M2C_FIELD(arg0, s32 *, 4) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = 4;
}
