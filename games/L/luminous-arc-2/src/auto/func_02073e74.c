#include "m2c.h"

M2C_UNK func_02007c50(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02007cb4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02008074(M2C_UNK);                     /* extern */
M2C_UNK func_02008244(M2C_UNK);                     /* extern */
extern M2C_UNK data_0216e3dc;
extern M2C_UNK data_0216f3dc;

s32 func_02073e74(void) {
    func_02007c50(0xFFFF, 0, 2, 0);
    if (M2C_FIELD(&data_0216f3dc, u8 *, 0x8BC) == 0) {
        func_02007cb4(1, 0, 0, 0, &data_0216e3dc);
    }
    func_02008244(1);
    func_02008074(1);
    M2C_FIELD(&data_0216e3dc, s16 *, 0xF4)       = 0;
    M2C_FIELD(&data_0216e3dc, s16 *, 0xF8)       = 0;
    M2C_FIELD(&data_0216e3dc, s16 *, 0xF6)       = 0;
    M2C_FIELD(&data_0216e3dc, s8 *, 0xFD)        = 0;
    return M2C_FIELD(&data_0216e3dc, s8 *, 0xFC) = 0;
}
