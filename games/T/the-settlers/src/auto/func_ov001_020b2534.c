#include "m2c.h"

M2C_UNK func_02022858(M2C_UNK **);                  /* extern */
M2C_UNK func_ov001_020b26d4();                            /* extern */
extern M2C_UNK data_ov001_020b294c;

M2C_UNK **func_ov001_020b2534(M2C_UNK **arg0) {
    *arg0 = &data_ov001_020b294c;
    func_ov001_020b26d4();
    func_02022858(arg0);
    return arg0;
}
