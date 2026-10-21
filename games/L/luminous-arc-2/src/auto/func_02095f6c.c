#include "m2c.h"

extern M2C_UNK data_02170d04;

s32 func_02095f6c(s32 arg0) {
    s32 var_ip;

    var_ip = 1;
    if ((arg0 != -1) && (arg0 != 0x7F000001)) {
        if ((arg0 & M2C_FIELD(&data_02170d04, s32 *, 0x1C)) !=
            (M2C_FIELD(&data_02170d04, s32 *, 0x50) & M2C_FIELD(&data_02170d04, s32 *, 0x1C))) {
            var_ip = 0;
        }
    }
    return var_ip;
}
