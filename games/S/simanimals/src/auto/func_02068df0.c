#include "m2c.h"

M2C_UNK func_020667e4();                            /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206693c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0209062c;
extern M2C_UNK func_02069058;

void func_02068df0(void) {
    if (M2C_FIELD(&data_0209062c, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0209062c, u16 *, 0) = 1U;
    M2C_FIELD(&data_0209062c, s32 *, 4) = 0;
    M2C_FIELD(&data_0209062c, s32 *, 8) = 0;
    func_020667e4();
    do {

    } while (func_0206693c(9, 1) == 0);
    *(s32 *) 0x027FFF90 = 0;
    func_020668f0(9, &func_02069058);
}
