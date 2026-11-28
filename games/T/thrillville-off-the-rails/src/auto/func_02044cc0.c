#include "m2c.h"

M2C_UNK func_0200ee34();                            /* extern */
M2C_UNK func_020450f8();                            /* extern */
extern M2C_UNK data_020e08b4;

void *func_02044cc0(void *arg0) {
    func_020450f8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e08b4;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    func_0200ee34();
    return arg0;
}
