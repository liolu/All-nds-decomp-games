#include "m2c.h"

s32 func_020103a8();                                /* extern */
extern M2C_UNK data_02093ecc;

void func_0200f190(void) {
    s32 temp_r0;

    temp_r0                             = func_020103a8();
    M2C_FIELD(&data_02093ecc, s32 *, 8) = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            M2C_FIELD(&data_02093ecc, s32 *, 4) = 0x06894000;
            return;
        case 0x20:
            M2C_FIELD(&data_02093ecc, s32 *, 4) = 0x06890000;
            return;
    }
}
