/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205e4f4(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_020d8a74;
extern M2C_UNK data_020d8ac0;
extern M2C_UNK data_020d8b74;

M2C_UNK *func_02053c18(void) {
    if (!(M2C_FIELD(&data_020d8a74, s32 *, 0xFC) & 4)) {
        func_0205e4f4(&data_020d8ac0, &data_020d8b74);
        M2C_FIELD(&data_020d8a74, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020d8a74, s32 *, 0xFC) | 4);
    }
    return &data_020d8b74;
}
