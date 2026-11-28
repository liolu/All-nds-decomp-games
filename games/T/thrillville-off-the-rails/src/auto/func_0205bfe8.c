#include "m2c.h"

M2C_UNK func_02013b70(void *, M2C_UNK *, void *);   /* extern */
M2C_UNK func_0205c118(void *, u8, s32, void *);     /* extern */
M2C_UNK func_0205c868(void *, u8, s32, M2C_UNK *, s32); /* extern */

void func_0205bfe8(void *arg0, s32 arg1, s32 arg2, void *arg3, u8 arg4) {
    u8 sp4[48];
    s32 temp_r1;
    s32 temp_r1_2;
    u8 temp_r1_3;
    u8 temp_r1_4;

    if ((arg4 == 0) || (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 8)), u8 *, 4) == 0)) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_r1 != 0) {
            temp_r1_2 = (arg1 * 0x34) + temp_r1;
            if (arg2 == M2C_FIELD(temp_r1_2, s32 *, 0x30)) {
                M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(temp_r1_2, s32 *, 0x24);
                M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(temp_r1_2, s32 *, 0x28);
                M2C_FIELD(arg3, s32 *, 8) = (s32) M2C_FIELD(temp_r1_2, s32 *, 0x2C);
                return;
            }
        }
    }
    temp_r1_3 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 8)), u8 *, 5);
    if ((u32) temp_r1_3 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0xB)) {
        func_0205c118(arg0, temp_r1_3, arg2, arg3);
    } else {
        M2C_FIELD(arg3, s32 *, 0) = 0;
        M2C_FIELD(arg3, s32 *, 4) = 0;
        M2C_FIELD(arg3, s32 *, 8) = 0;
    }
    temp_r1_4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 8)), u8 *, 4);
    if ((u32) temp_r1_4 >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0xA)) {
        return;
    }
    if (arg4 != 0) {
        return;
    }
    func_0205c868(arg0, temp_r1_4, arg2, sp4, 0);
    func_02013b70(arg3, sp4, arg3);
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg3, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 8);
}
