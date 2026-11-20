#include "m2c.h"

s32 func_0209a8ac(s32);                             /* extern */
s32 func_0209abe0(M2C_UNK *);                       /* extern */
extern void *data_0211d7ec;
extern M2C_UNK data_0211d824;
extern M2C_UNK data_02172540;

s32 func_0209a674(void) {
    s32 temp_r0;

    temp_r0 = func_0209a8ac(M2C_FIELD(data_0211d7ec, s32 *, 0x20));
    if (temp_r0 >= 0) {
        M2C_FIELD(&data_02172540, s32 *, 0xC) = func_0209abe0(&data_0211d824);
    }
    return temp_r0;
}
