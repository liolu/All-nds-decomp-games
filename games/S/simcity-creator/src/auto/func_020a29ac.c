#include "m2c.h"

M2C_UNK func_0202b168(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a28d4(void *);                      /* extern */
M2C_UNK func_020a2d68(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a2dec(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b0684(s32);                         /* extern */
M2C_UNK func_020b0814(s32, u8, s32, s32);           /* extern */
M2C_UNK func_020b082c(s32, u8, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b0840(s32, u8, M2C_UNK);            /* extern */

void func_020a29ac(void *arg0) {
    s16 temp_r0_2;
    s32 temp_r0;
    u32 temp_r0_3;

    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r0 != 0) {
        func_020b0814(temp_r0, (u8) M2C_FIELD(arg0, s16 *, 0x42), M2C_FIELD(arg0, s16 *, 0x28) << 0xC,
                      M2C_FIELD(arg0, s16 *, 0x2A) << 0xC);
        func_020b082c(M2C_FIELD(arg0, s32 *, 0xB0), (u8) M2C_FIELD(arg0, s16 *, 0x42), 0x1000, 0x1000);
        func_020b0840(M2C_FIELD(arg0, s32 *, 0xB0), (u8) M2C_FIELD(arg0, s16 *, 0x42), 0x1000);
        func_020b0684(M2C_FIELD(arg0, s32 *, 0xB0));
        return;
    }
    func_0202b168(arg0 + 0x58, 0x1000);
    func_020a28d4(arg0);
    temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x44);
    switch (temp_r0_2) {                            /* irregular */
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
                return;
            }
            M2C_FIELD(arg0, u32 *, 0xB8) = 0U;
            func_020a2dec(arg0, 1);
            return;
        case 1:
            if (M2C_FIELD(arg0, u8 *, 0x55) == 0) {
                return;
            }
            temp_r0_3                    = M2C_FIELD(arg0, u32 *, 0xB8) + 1;
            M2C_FIELD(arg0, u32 *, 0xB8) = temp_r0_3;
            if (temp_r0_3 <= 0x3CU) {
                return;
            }
            func_020a2dec(arg0, 2);
            M2C_FIELD(arg0, u32 *, 0xB8) = 0U;
            M2C_FIELD(arg0, u8 *, 0x55)  = 0U;
            return;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
                return;
            }
            func_020a2d68(arg0, 0);
            return;
    }
}
