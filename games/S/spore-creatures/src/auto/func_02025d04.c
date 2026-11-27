#include "m2c.h"

M2C_UNK func_02025294();                            /* extern */
M2C_UNK func_02025518(M2C_UNK **, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020de6f8;

M2C_UNK **func_02025d04(M2C_UNK **arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02025294();
    *arg0 = &data_020de6f8;
    func_02025518(arg0, arg2, arg1, 0, arg3);
    return arg0;
}
