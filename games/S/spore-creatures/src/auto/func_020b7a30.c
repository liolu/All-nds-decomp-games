#include "m2c.h"

M2C_UNK func_020b79f4();                            /* extern */
M2C_UNK func_020bdba4(u16);                         /* extern */
extern M2C_UNK data_020f1d14;

void func_020b7a30(void) {
    func_020b79f4();
    func_020bdba4(M2C_FIELD(&data_020f1d14, u16 *, 4));
}
