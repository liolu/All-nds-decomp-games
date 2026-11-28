#include "m2c.h"

s32 func_02091490(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_020e2b50;

s32 func_0208cbcc(s32 arg0, M2C_UNK arg1) {
    if (func_02091490(arg1, &data_020e2b50) != 0) {
        return arg0 + 0xC;
    }
    return 0;
}
