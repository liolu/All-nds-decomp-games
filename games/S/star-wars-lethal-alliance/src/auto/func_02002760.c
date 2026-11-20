#include "m2c.h"

M2C_UNK func_02002780();                            /* extern */
extern M2C_UNK data_020d8f88;

M2C_UNK **func_02002760(M2C_UNK **arg0) {
    *arg0 = &data_020d8f88;
    func_02002780();
    return arg0;
}
