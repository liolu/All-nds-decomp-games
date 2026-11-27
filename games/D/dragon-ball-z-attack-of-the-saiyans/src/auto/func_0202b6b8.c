#include "m2c.h"

M2C_UNK func_0200aa28();                            /* extern */
M2C_UNK func_0200aa6c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0207f700(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d1c20;
extern M2C_UNK data_027e0104;
extern M2C_UNK data_027e0108;
extern M2C_UNK data_027e0148;

void func_0202b6b8(s32 arg0, s32 arg1, s32 arg2) {
    func_0200aa28();
    func_0200aa6c(0x1F, 0);
    M2C_FIELD(&data_027e0104, s16 *, 0)    = 0;
    M2C_FIELD(&data_027e0104, s16 *, 2)    = 0;
    M2C_FIELD(&data_027e0104, s32 *, 0x8C) = arg0;
    M2C_FIELD(&data_027e0104, s32 *, 0x90) = arg1;
    M2C_FIELD(&data_027e0104, s16 *, 0x94) = 0x7FFF;
    func_0207f700(&data_027e0108);
    M2C_FIELD(&data_027e0104, s32 *, 0x88) = 0;
    M2C_FIELD(&data_027e0104, s32 *, 0x84) = 0;
    func_0207f700(&data_027e0148);
    M2C_FIELD(&data_027e0104, s32 *, 0x7C)      = arg2;
    M2C_FIELD(&data_027e0104, s16 *, 0x98)      = 0;
    M2C_FIELD(&data_027e0104, s16 *, 0x9A)      = 0;
    M2C_FIELD(&data_027e0104, s8 *, 0x97)       = 0x1F;
    M2C_FIELD(&data_027e0104, s8 *, 0x96)       = 0;
    M2C_FIELD(&data_027e0104, M2C_UNK **, 0xA0) = &data_020d1c20;
}
