#include "m2c.h"

M2C_UNK func_020b8d4c();                            /* extern */
M2C_UNK func_020b8e58(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020b8ea4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020f3990;
extern M2C_UNK func_020bb5cc;

void func_020bb84c(void) {
    if (M2C_FIELD(&data_020f3990, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020f3990, u16 *, 0) = 1U;
    func_020b8d4c();
    M2C_FIELD(&data_020f3990, s16 *, 0x10) = 0;
    M2C_FIELD(&data_020f3990, s32 *, 4)    = 0;
    M2C_FIELD(&data_020f3990, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020f3990, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020f3990, s16 *, 0x34) = 0;
    M2C_FIELD(&data_020f3990, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_020f3990, s16 *, 0x38) = 0;
    do {

    } while (func_020b8ea4(6, 1) == 0);
    func_020b8e58(6, &func_020bb5cc);
}
