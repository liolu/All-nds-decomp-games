#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_02034904(M2C_UNK);                         /* extern */
M2C_UNK func_02034934(s32);                         /* extern */
M2C_UNK func_02060a70(void *, s32);                 /* extern */
M2C_UNK func_02060c1c(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_02061f2c(M2C_UNK *, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02071c48(s32);                             /* extern */
void *func_0207441c(s32, M2C_UNK);                  /* extern */
extern M2C_UNK data_020ccbec;
extern M2C_UNK data_020ccc10;

void func_02060ac4(void *arg0) {
    u8 spC[256];
    u8 sp0[12];
    s32 temp_r0;
    void *temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0xF00) = 5;
    M2C_FIELD(arg0, s32 *, 0xF04) = 1;
    func_02061c28(sp0);
    temp_r0 = func_02034904(0x1B0);
    func_02061f2c(sp0, temp_r0, &data_020ccbec, 0x1B0);
    func_02060a70(arg0 + 0xEE8, temp_r0 + 0x1A0);
    func_02014050(spC, &data_020ccc10, M2C_FIELD(arg0, u8 *, 0xEF4) + 1);
    func_02060c1c(arg0, spC);
    temp_r0_2 = func_0207441c(func_02071c48(M2C_FIELD(arg0, s32 *, 0xF14)), 0x31);
    M2C_FIELD(temp_r0_2, s16 *, 4) =
        (s16) ((M2C_FIELD(temp_r0_2, s16 *, 0) + M2C_FIELD(arg0, s16 *, 0xEEC)) - M2C_FIELD(arg0, s16 *, 0xEE8));
    M2C_FIELD(temp_r0_2, s16 *, 6) =
        (s16) ((M2C_FIELD(temp_r0_2, s16 *, 2) + M2C_FIELD(arg0, s16 *, 0xEEE)) - M2C_FIELD(arg0, s16 *, 0xEEA));
    func_02034934(temp_r0);
    func_02061c34(sp0);
}
