/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f21c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020a5180(void *);                      /* extern */
extern M2C_UNK data_021062c8;

void *func_020a5230(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021062c8;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)      = func_0200f21c(M2C_FIELD(arg0, s32 *, 0xC) * 4, 0);
    func_020a5180(arg0);
    return arg0;
}
