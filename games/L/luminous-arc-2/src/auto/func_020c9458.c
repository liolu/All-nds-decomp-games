#include "m2c.h"

s16 func_02001808(s32);                             /* extern */
M2C_UNK func_0206c210(M2C_UNK);                     /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern u8 data_02158048;
extern M2C_UNK data_02175b4c;

void func_020c9458(void) {
    M2C_FIELD(&data_02175b4c, s16 *, 0x94) = func_02001808(0x0400006C);
    M2C_FIELD(&data_02175b4c, s16 *, 0x96) = func_02001808(0x0400106C);
    func_0206c4b4(3, 0x15, 0x7F, 0x7F, 0, 0x100);
    func_0206c4b4(4, 0x402, 0x7F, 0x7F, 0, 0x100);
    func_0206c210(0);
    data_02158048 += 1;
}
