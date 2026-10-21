#include "m2c.h"

s32 *func_02032f64(u8, M2C_UNK);                    /* extern */
extern M2C_UNK data_02181a4c;

void func_02033964(void) {
    M2C_FIELD(&data_02181a4c, s8 *, 0x260)                       = 1;
    M2C_FIELD(&data_02181a4c, s8 *, 0x261)                       = 0;
    *func_02032f64(M2C_FIELD(&data_02181a4c, u8 *, 0x274), 0x19) = 0x150000;
    *func_02032f64(M2C_FIELD(&data_02181a4c, u8 *, 0x274), 0x1A) = 0x150001;
}
