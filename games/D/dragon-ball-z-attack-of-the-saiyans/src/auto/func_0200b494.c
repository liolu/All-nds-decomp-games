#include "m2c.h"

M2C_UNK func_0200b758();                            /* extern */
s32 func_02087460(M2C_UNK *);                       /* extern */
M2C_UNK func_020874f4(M2C_UNK *);                   /* extern */
M2C_UNK func_0208761c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02087b8c(M2C_UNK);                     /* extern */
M2C_UNK func_02087ba4(M2C_UNK);                     /* extern */
extern M2C_UNK data_020af054;
extern M2C_UNK data_020af06c;

void func_0200b494(void) {
    u8 sp0[8];

    M2C_FIELD(&data_020af054, s8 *, 0x14) = 0x18;
    M2C_FIELD(&data_020af054, s8 *, 0x15) = 3;
    if (func_02087460(sp0) != 0) {
        func_020874f4(sp0);
    }
    func_0208761c(0, 1, &data_020af06c, 4);
    func_02087b8c(2);
    func_02087ba4(2);
    M2C_FIELD(&data_020af054, s32 *, 8) = 0;
    func_0200b758();
}
