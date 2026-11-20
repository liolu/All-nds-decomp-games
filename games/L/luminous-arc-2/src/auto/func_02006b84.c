#include "m2c.h"

M2C_UNK func_02004534(M2C_UNK);                     /* extern */
extern M2C_UNK data_02147c54;

void func_02006b84(void) {
    if (M2C_FIELD(&data_02147c54, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02147c54, u16 *, 0)    = 1U;
    M2C_FIELD(&data_02147c54, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02147c54, s32 *, 0x10) = 0;
    func_02004534(4);
    M2C_FIELD(&data_02147c54, s32 *, 8) = 0;
    M2C_FIELD(&data_02147c54, s32 *, 4) = 0;
}
