#include "m2c.h"

M2C_UNK func_020075b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02032264(M2C_UNK *, M2C_UNK, u8);      /* extern */
M2C_UNK func_02032304(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02032658(void *);                      /* extern */
M2C_UNK func_02032c58(void *);                      /* extern */

void func_02032388(void *arg0, s32 arg1) {
    u8 sp0[28];
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r1_3;
    s16 temp_r1_4;
    s16 temp_r1_5;
    s16 temp_r1_6;
    s16 temp_r1_7;
    s16 temp_r1_8;
    u8 var_r0;

    func_020075b0(arg0 + 0x8C, 0, 0x18);
    if (!(M2C_FIELD(arg0, u8 *, 0x15) & 4)) {
        func_02032264(sp0, 0, M2C_FIELD(arg0, u8 *, 0x4C));
        func_02032304(arg0, sp0);
        func_02032264(sp0, 1, M2C_FIELD(arg0, u8 *, 0x4D));
        func_02032304(arg0, sp0);
        func_02032264(sp0, 2, M2C_FIELD(arg0, u8 *, 0x4E));
        func_02032304(arg0, sp0);
    }
    func_02032658(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x9D) == 0xFF) {
        var_r0 = 2;
    } else {
        var_r0 = M2C_FIELD(arg0, u8 *, 0x71);
    }
    M2C_FIELD(arg0, u8 *, 0x12) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x10) = (s8) (M2C_FIELD(arg0, u8 *, 0x70) + M2C_FIELD(arg0, s8 *, 0x9C));
    M2C_FIELD(arg0, s16 *, 0)   = (s16) (M2C_FIELD(arg0, s16 *, 0x60) + M2C_FIELD(arg0, s16 *, 0x8C));
    temp_r1                     = M2C_FIELD(arg0, s16 *, 0);
    if ((s32) temp_r1 > 0x270F) {
        M2C_FIELD(arg0, s16 *, 0) = 0x270F;
    } else if ((s32) temp_r1 <= 0) {
        M2C_FIELD(arg0, s16 *, 0) = 1;
    }
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 0x62) + M2C_FIELD(arg0, s16 *, 0x8E));
    temp_r1_2                 = M2C_FIELD(arg0, s16 *, 2);
    if ((s32) temp_r1_2 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 2) = 0x3E7;
    } else if ((s32) temp_r1_2 < 0) {
        M2C_FIELD(arg0, s16 *, 2) = 0;
    }
    if (arg1 != 0) {
        M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg0, s16 *, 0);
        M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg0, s16 *, 2);
    }
    func_02032c58(arg0);
    M2C_FIELD(arg0, s8 *, 0x14) = (s8) (M2C_FIELD(arg0, u8 *, 0x73) + M2C_FIELD(arg0, s8 *, 0x9F));
    M2C_FIELD(arg0, s16 *, 0x28) =
        (s16) (M2C_FIELD(arg0, u8 *, 0xA6) +
               (M2C_FIELD(arg0, s16 *, 0x74) + (M2C_FIELD(arg0, s16 *, 0x64) + M2C_FIELD(arg0, s16 *, 0x90))));
    temp_r1_3 = M2C_FIELD(arg0, s16 *, 0x28);
    if ((s32) temp_r1_3 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x28) = 0x3E7;
    } else if ((s32) temp_r1_3 < 0) {
        M2C_FIELD(arg0, s16 *, 0x28) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2A) =
        (s16) (M2C_FIELD(arg0, u8 *, 0xA7) +
               (M2C_FIELD(arg0, s16 *, 0x78) + (M2C_FIELD(arg0, s16 *, 0x66) + M2C_FIELD(arg0, s16 *, 0x92))));
    temp_r1_4 = M2C_FIELD(arg0, s16 *, 0x2A);
    if ((s32) temp_r1_4 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x2A) = 0x3E7;
    } else if ((s32) temp_r1_4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2C) =
        (s16) (M2C_FIELD(arg0, u8 *, 0xA8) +
               (M2C_FIELD(arg0, s16 *, 0x7C) + (M2C_FIELD(arg0, s16 *, 0x68) + M2C_FIELD(arg0, s16 *, 0x94))));
    temp_r1_5 = M2C_FIELD(arg0, s16 *, 0x2C);
    if ((s32) temp_r1_5 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x2C) = 0x3E7;
    } else if ((s32) temp_r1_5 < 0) {
        M2C_FIELD(arg0, s16 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2E) =
        (s16) (M2C_FIELD(arg0, u8 *, 0xA9) +
               (M2C_FIELD(arg0, s16 *, 0x80) + (M2C_FIELD(arg0, s16 *, 0x6A) + M2C_FIELD(arg0, s16 *, 0x96))));
    temp_r1_6 = M2C_FIELD(arg0, s16 *, 0x2E);
    if ((s32) temp_r1_6 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x2E) = 0x3E7;
    } else if ((s32) temp_r1_6 < 0) {
        M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x30) =
        (s16) (M2C_FIELD(arg0, u8 *, 0xAA) +
               (M2C_FIELD(arg0, s16 *, 0x84) + (M2C_FIELD(arg0, s16 *, 0x6C) + M2C_FIELD(arg0, s16 *, 0x98))));
    temp_r1_7 = M2C_FIELD(arg0, s16 *, 0x30);
    if ((s32) temp_r1_7 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x30) = 0x3E7;
    } else if ((s32) temp_r1_7 < 0) {
        M2C_FIELD(arg0, s16 *, 0x30) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x32) =
        (s16) (M2C_FIELD(arg0, u8 *, 0xAB) +
               (M2C_FIELD(arg0, s16 *, 0x88) + (M2C_FIELD(arg0, s16 *, 0x6E) + M2C_FIELD(arg0, s16 *, 0x9A))));
    temp_r1_8 = M2C_FIELD(arg0, s16 *, 0x32);
    if ((s32) temp_r1_8 > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x32) = 0x3E7;
        return;
    }
    if ((s32) temp_r1_8 < 0) {
        M2C_FIELD(arg0, s16 *, 0x32) = 0;
    }
}
