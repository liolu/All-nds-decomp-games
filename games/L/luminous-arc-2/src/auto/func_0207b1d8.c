#include "m2c.h"

M2C_UNK func_02001670(M2C_UNK);                     /* extern */
M2C_UNK func_020016a4(M2C_UNK, u16);                /* extern */
M2C_UNK func_02001714();                            /* extern */
M2C_UNK func_02004334(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02004504(M2C_UNK);                     /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern s8 data_0215142e;
extern M2C_UNK func_020241d0;
extern M2C_UNK func_02024348;

void func_0207b1d8(void *arg0) {
    u16 temp_r1;

    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 7, 2, 5, 1, 3, 0, 1, 1, 1);
    M2C_FIELD((void *) 0x05000000, s16 *, 0)     = 0x7FFF;
    M2C_FIELD((void *) 0x05000000, s16 *, 0x400) = 0x7FFF;
    func_02004334(1, &func_020241d0);
    func_02004334(2, &func_02024348);
    func_02004504(3);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020016a4(1, temp_r1);
    func_02001670(1);
    data_0215142e = 0;
    func_020caa3c(3, 3, 0x10);
    func_02001714();
    *(s32 *) 0x04001000 |= 0x10000;
    M2C_FIELD(arg0, u8 *, 0x77C) = (u8) (M2C_FIELD(arg0, u8 *, 0x77C) + 1);
}
