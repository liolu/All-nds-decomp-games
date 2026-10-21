#include "m2c.h"

M2C_UNK func_02005204();                            /* extern */
M2C_UNK func_0200536c();                            /* extern */
extern M2C_UNK data_02170d04;

void func_02095ae0(void) {
    if (M2C_FIELD(&data_02170d04, s32 *, 0x24) == 0) {
        func_02005204();
        return;
    }
    func_0200536c();
}
