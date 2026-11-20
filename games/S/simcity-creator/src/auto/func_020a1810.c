#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020cf31c;

s32 func_020a1810(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_02014050(arg1, &data_020cf31c);
    if (arg2 >= 0) {
        return 0xF;
    }
    return 1;
}
