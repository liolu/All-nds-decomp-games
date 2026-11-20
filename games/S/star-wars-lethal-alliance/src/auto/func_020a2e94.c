#include "m2c.h"

M2C_UNK func_02005538();                            /* extern */
extern M2C_UNK data_020d9344;

M2C_UNK **func_020a2e94(M2C_UNK **arg0) {
    *arg0 = &data_020d9344;
    func_02005538();
    return arg0;
}
