#include "m2c.h"

M2C_UNK func_02007c28(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02007cb4(M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02008074(M2C_UNK);                     /* extern */
M2C_UNK func_02008244(M2C_UNK);                     /* extern */
extern M2C_UNK data_0216e3dc;
extern M2C_UNK data_0216f3dc;
extern M2C_UNK func_02073ef4;

s32 func_02073e08(void) {
    if (M2C_FIELD(&data_0216f3dc, u8 *, 0x8BC) == 0) {
        func_02007cb4(1, 0x1474, 0x1474, &func_02073ef4, &data_0216e3dc);
        func_02007c28(0, 0, 2, 0);
        func_02008244(1);
        func_02008074(1);
    }
    return 0;
}
