/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202e428(M2C_UNK *);                   /* extern */
extern s32 data_020cf5cc;
extern M2C_UNK func_02001d04;

void *func_02001cbc(void *arg0) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    temp_r2                      = data_020cf5cc;
    data_020cf5cc                = temp_r2 + 1;
    if (temp_r2 == 0) {
        func_0202e428(&func_02001d04);
    }
    return arg0;
}
