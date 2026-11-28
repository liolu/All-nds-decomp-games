#include "m2c.h"

M2C_UNK func_02085758();                            /* extern */
extern M2C_UNK data_020e2520;

void *func_0208555c(void *arg0) {
    func_02085758();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e2520;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    return arg0;
}
