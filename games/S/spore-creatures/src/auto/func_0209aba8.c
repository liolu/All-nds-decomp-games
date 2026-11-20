#include "m2c.h"

M2C_UNK func_020934a8(M2C_UNK **);                  /* extern */
M2C_UNK func_0209a6e0();                            /* extern */
extern M2C_UNK data_020dfeec;

M2C_UNK **func_0209aba8(M2C_UNK **arg0) {
    *arg0 = &data_020dfeec;
    func_0209a6e0();
    func_020934a8(arg0);
    return arg0;
}
