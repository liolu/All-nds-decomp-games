#include "m2c.h"

s32 func_020f4acc(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_02111534;

s32 func_020f0478(s32 arg0, M2C_UNK arg1) {
    if (func_020f4acc(arg1, &data_02111534) != 0) {
        return arg0 + 0xC;
    }
    return 0;
}
