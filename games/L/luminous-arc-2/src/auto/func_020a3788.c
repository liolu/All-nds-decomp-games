#include "m2c.h"

M2C_UNK func_02035acc(s16, s16);                    /* extern */
M2C_UNK func_02035b28(u16);                         /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
extern M2C_UNK data_02152a24;
extern M2C_UNK data_02172940;

void func_020a3788(void) {
    func_020a3b54(0);
    if (M2C_FIELD(&data_02172940, u16 *, 0x14) == 3) {
        func_02035acc(M2C_FIELD(&data_02152a24, s16 *, 0), M2C_FIELD(&data_02152a24, s16 *, 2));
    } else {
        func_02035b28((u16) M2C_FIELD(&data_02152a24, s16 *, 0));
    }
    M2C_FIELD(&data_02172940, u8 *, 0x16) = (u8) (M2C_FIELD(&data_02172940, u8 *, 0x16) + 1);
}
