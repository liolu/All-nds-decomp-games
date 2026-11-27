#include "m2c.h"

M2C_UNK func_0205e460(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e0e6c;

s32 func_0205e3a4(s32 *arg0) {
    if (*arg0 == 0) {
        return;
    }
    func_0205e460(&data_020e0e6c);
    return *arg0 = 0;
}
