#include "m2c.h"

M2C_UNK func_02007c50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02007d14(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02008244(M2C_UNK);                     /* extern */
extern M2C_UNK data_0216bc50;

void func_020383d8(void) {
    if (M2C_FIELD(&data_0216bc50, u8 *, 7) == 0) {
        func_02007c50(1, 0, 1, 0);
        func_02007d14(1, 0);
    } else {
        func_02007c50(3, 0, 1, 0);
        func_02007d14(3, 0);
    }
    func_02008244(1);
}
