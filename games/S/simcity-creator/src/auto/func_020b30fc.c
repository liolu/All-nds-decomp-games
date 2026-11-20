#include "m2c.h"

M2C_UNK func_020b3134();                            /* extern */
extern M2C_UNK data_020d0374;

M2C_UNK **func_020b30fc(M2C_UNK **arg0) {
    *arg0 = &data_020d0374;
    func_020b3134();
    return arg0;
}
