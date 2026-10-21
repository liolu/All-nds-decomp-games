#include "m2c.h"

M2C_UNK func_020cb1e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02158050;

void func_0204c97c(void) {
    func_020cb1e4(1, 2, 1, 0x15, *(u16 *) 0x0400100A | 0x80000000,
                  (s32) (u16) ((M2C_FIELD(&data_02158050, u8 *, 0x2C7) * 2) + 0x2020));
}
