#include "m2c.h"

s32 func_02061534();                                /* extern */
extern M2C_UNK data_0208e548;

void func_0206229c(void) {
    s32 temp_r0;

    temp_r0                             = func_02061534();
    M2C_FIELD(&data_0208e548, s32 *, 8) = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            M2C_FIELD(&data_0208e548, s32 *, 4) = 0x06894000;
            return;
        case 0x20:
            M2C_FIELD(&data_0208e548, s32 *, 4) = 0x06890000;
            return;
    }
}
