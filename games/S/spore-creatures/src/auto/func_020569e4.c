#include "m2c.h"

M2C_UNK func_02056aa0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e0e3c;

s32 func_020569e4(s32 *arg0) {
    if (*arg0 == 0) {
        return;
    }
    func_02056aa0(&data_020e0e3c);
    return *arg0 = 0;
}
