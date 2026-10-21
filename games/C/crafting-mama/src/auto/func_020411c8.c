#include "m2c.h"

s32 func_0205e85c(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205e9e4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020aad7c;

void func_020411c8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = func_0205e85c(4, &data_020aad7c, 0, -1, 0x8000);
    func_0205e9e4(M2C_FIELD(arg0, s32 *, 0x60), 0x80, 0x60, 2, 0xFE);
}
