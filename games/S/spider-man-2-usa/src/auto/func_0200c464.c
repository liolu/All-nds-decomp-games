/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038bc4(M2C_UNK *);                   /* extern */
extern s32 data_02157e2c;
extern M2C_UNK func_0200c4ac;

void *func_0200c464(void *arg0) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    temp_r2                      = data_02157e2c;
    data_02157e2c                = temp_r2 + 1;
    if (temp_r2 == 0) {
        func_02038bc4(&func_0200c4ac);
    }
    return arg0;
}
