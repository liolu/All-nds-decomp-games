#include "m2c.h"

s32 func_0202fc30(M2C_UNK *);                       /* extern */
M2C_UNK func_0202ff44(M2C_UNK *);                   /* extern */
void *func_0202ff90(M2C_UNK *);                     /* extern */
extern M2C_UNK data_020d6cdc;

s32 func_02030060(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;
    M2C_UNK *local;

    local = &data_020d6cdc;
    if (func_0202fc30(local) != 0) {
        return 0;
    }
    temp_r0                        = func_0202ff90(local);
    M2C_FIELD(temp_r0, s32 *, 0)   = arg0;
    M2C_FIELD(temp_r0, s32 *, 4)   = arg2;
    M2C_FIELD(temp_r0, s32 *, 8)   = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg3;
    func_0202ff44(local);
    M2C_FIELD(local, s32 *, 0x10) = (s32) (M2C_FIELD(local, s32 *, 0x10) + M2C_FIELD(temp_r0, s32 *, 0xC));
    return 1;
}
