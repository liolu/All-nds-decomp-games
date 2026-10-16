#include "m2c.h"

M2C_UNK func_0209bce4(M2C_UNK **);                  /* extern */
M2C_UNK func_0209c970();                            /* extern */
extern M2C_UNK data_020e3088;

M2C_UNK **func_0209c628(M2C_UNK **arg0) {
    *arg0 = &data_020e3088;
    func_0209c970();
    func_0209bce4(arg0);
    return arg0;
}
