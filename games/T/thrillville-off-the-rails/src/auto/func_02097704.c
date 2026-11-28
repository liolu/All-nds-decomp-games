#include "m2c.h"

M2C_UNK func_02097860(M2C_UNK **);                  /* extern */
M2C_UNK func_020977f8();                            /* extern */
M2C_UNK func_02074314(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020e35d0;

M2C_UNK **func_02097704(M2C_UNK **arg0) {
    *arg0 = &data_020e35d0;
    func_020977f8();
    func_02097860(arg0);
    func_02074314(arg0);
    return arg0;
}
