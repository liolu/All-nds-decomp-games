#include "m2c.h"

M2C_UNK func_02089d74(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_02089df8(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020e69c0;
extern M2C_UNK data_020e6a6c;

void func_02088514(s32 arg0) {
    if (arg0 == func_02089df8(&data_020e6a6c)) {
        return;
    }
    func_02089d74(&data_020e6a6c, arg0, 0);
    M2C_FIELD(&data_020e69c0, s32 *, 0xB4) = 0x18;
}
