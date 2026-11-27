#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
M2C_UNK func_020853b4();                            /* extern */
M2C_UNK func_020854c0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0208550c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020da5c0;
extern M2C_UNK func_02087d98;

void func_02087d00(void) {
    s32 temp_r1;

    if (M2C_FIELD(&data_020da5c0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020da5c0, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020da5c0, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_020da5c0, s32 *, 0x20) = 0;
    func_020853b4();
    if (func_0208550c(8, 1) == 0) {
        do {
            WaitByLoop(0x64);
        } while (func_0208550c(8, 1) == 0);
    }
    func_020854c0(8, &func_02087d98);
    temp_r1                             = *(s32 *) 0x027FFC3C;
    M2C_FIELD(&data_020da5c0, s32 *, 8) = temp_r1;
    M2C_FIELD(&data_020da5c0, s32 *, 4) = temp_r1;
}
