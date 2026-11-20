#include "m2c.h"

s32 *func_02032f64(u8, M2C_UNK);                    /* extern */
M2C_UNK func_02033d84(M2C_UNK);                     /* extern */
M2C_UNK func_020cf150(M2C_UNK, M2C_UNK, u8);        /* extern */
extern M2C_UNK data_02181a4c;

void func_02033730(void) {
    *func_02032f64(M2C_FIELD(&data_02181a4c, u8 *, 0x274), 0x1B) = 0x130000;
    func_02033d84(0);
    func_020cf150(0x4F, 0x14, M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    func_020cf150(0x1D, 1, M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    M2C_FIELD(&data_02181a4c, s8 *, 0x260) = 1;
}
