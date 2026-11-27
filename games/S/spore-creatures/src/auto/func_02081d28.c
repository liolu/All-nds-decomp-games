#include "m2c.h"

M2C_UNK func_02081b20(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_027e033c;
extern M2C_UNK data_027e0344;
extern M2C_UNK data_027e04fc;

M2C_UNK *func_02081d28(void) {
    if (!(M2C_FIELD(&data_027e033c, s32 *, 0xFC) & 0x10)) {
        func_02081b20(&data_027e0344, &data_027e04fc);
        M2C_FIELD(&data_027e033c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e033c, s32 *, 0xFC) | 0x10);
    }
    return &data_027e04fc;
}
