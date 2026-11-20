#include "m2c.h"

M2C_UNK func_0205de80(s8);                          /* extern */
M2C_UNK func_020a2fb8();                            /* extern */
M2C_UNK func_020a3054(u16);                         /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cc610(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
extern M2C_UNK data_020ddf1c;
extern M2C_UNK data_02172940;

s32 func_020a2ed0(void) {
    if (M2C_FIELD(&data_02172940, u16 *, 0x14) == 0) {
        func_0205de80(M2C_FIELD(&data_02172940, s8 *, 0x18));
        M2C_FIELD(&data_02172940, s8 *, 0x18) = 0;
        func_0205de80(M2C_FIELD(&data_02172940, s8 *, 0x19));
        M2C_FIELD(&data_02172940, s8 *, 0x19) = 0;
        func_0205de80(M2C_FIELD(&data_02172940, s8 *, 0x1A));
        M2C_FIELD(&data_02172940, s8 *, 0x1A) = 0;
        func_0205de80(M2C_FIELD(&data_02172940, s8 *, 0x1B));
        M2C_FIELD(&data_02172940, s8 *, 0x1B) = 0;
        func_020cc3fc(0, 0x25, 1);
        func_020cc610(0, 1, 1, 0, 0, 1);
        func_020cd7d0(M2C_FIELD(&data_02172940, s32 *, 0));
        return 1;
    }
    do {
        if (M2C_FIELD(&data_02172940, s32 *, 0x10) != 0) {
            func_020a2fb8();
        }
        func_020a3054(M2C_FIELD(&data_02172940, u16 *, 0x14));
    } while (*((M2C_UNK *) ((s8 *) &data_020ddf1c + (M2C_FIELD(&data_02172940, u16 *, 0x14) * 4))) != 0);
    return 0;
}
