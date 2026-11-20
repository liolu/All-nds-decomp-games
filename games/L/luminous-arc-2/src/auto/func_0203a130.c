#include "m2c.h"

M2C_UNK func_02041f10();                            /* extern */
extern s8 data_02158048;
extern void *data_02175a48;

void func_0203a130(void) {
    func_02041f10();
    M2C_FIELD(data_02175a48, s8 *, 0x26) = 3;
    data_02158048                        = 9;
}
