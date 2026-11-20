#include "m2c.h"

M2C_UNK func_02062818(M2C_UNK);                     /* extern */
extern M2C_UNK data_0208e93c;

void func_020649e0(void) {
    if (M2C_FIELD(&data_0208e93c, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0208e93c, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0208e93c, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0208e93c, s32 *, 0x10) = 0;
    func_02062818(4);
    M2C_FIELD(&data_0208e93c, s32 *, 8) = 0;
    M2C_FIELD(&data_0208e93c, s32 *, 4) = 0;
}
