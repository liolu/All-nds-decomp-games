#include "m2c.h"

M2C_UNK func_ov002_02102464();                            /* extern */
extern M2C_UNK data_ov002_02122168;

M2C_UNK **func_ov002_0210241c(M2C_UNK **arg0) {
    *arg0 = &data_ov002_02122168;
    func_ov002_02102464();
    return arg0;
}
