#include "m2c.h"

M2C_UNK func_020b8d4c();

M2C_UNK func_020b8e58(M2C_UNK, M2C_UNK *);

s32 func_020b8ea4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020f3a34;
extern M2C_UNK func_020bce6c;

void func_020bcbf8(void) {
    if (M2C_FIELD(&data_020f3a34, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020f3a34, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020f3a34, s32 *, 4)    = 0;
    M2C_FIELD(&data_020f3a34, s32 *, 8)    = 0;
    M2C_FIELD(&data_020f3a34, s32 *, 0x20) = 0;
    M2C_FIELD(&data_020f3a34, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020f3a34, s32 *, 0x10) = 0;
    func_020b8d4c();
    do {

    } while (func_020b8ea4(5, 1) == 0);
    func_020b8e58(5, &func_020bce6c);
}
