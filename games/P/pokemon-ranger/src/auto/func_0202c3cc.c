#include "m2c.h"

M2C_UNK func_020b20cc();                            /* extern */
extern M2C_UNK data_020e64dc;
extern M2C_UNK data_020e6500;
extern s32 data_020f3988;

M2C_UNK **func_0202c3cc(M2C_UNK **arg0) {
    *arg0         = &data_020e64dc;
    data_020f3988 = 0;
    *arg0         = &data_020e6500;
    func_020b20cc(arg0);
    return arg0;
}
