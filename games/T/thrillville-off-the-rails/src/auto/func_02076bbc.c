#include "m2c.h"

M2C_UNK func_02013c24(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02013e44(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020141fc(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_020f433c;
extern M2C_UNK data_020f4388;
extern M2C_UNK data_020f43f8;
extern M2C_UNK data_020f446c;
extern M2C_UNK data_020f449c;

M2C_UNK *func_02076bbc(void) {
    if (!(M2C_FIELD(&data_020f433c, s32 *, 0xFC) & 0x80)) {
        func_02013c24(&data_020f43f8, &data_020f4388, &data_020f446c);
        func_020141fc(&data_020f446c, &data_020f446c, M2C_FIELD(&data_020f433c, s32 *, 0xEC),
                      M2C_FIELD(&data_020f433c, s32 *, 0xF0), M2C_FIELD(&data_020f433c, s32 *, 0xF4));
        func_02013e44(&data_020f446c, &data_020f449c);
        M2C_FIELD(&data_020f433c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020f433c, s32 *, 0xFC) | 0x80);
    }
    return &data_020f446c;
}
