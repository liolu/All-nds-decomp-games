#include "m2c.h"

M2C_UNK func_02002ed8();                            /* extern */
extern M2C_UNK data_020d9044;

M2C_UNK **func_02002eb8(M2C_UNK **arg0) {
    *arg0 = &data_020d9044;
    func_02002ed8();
    return arg0;
}
