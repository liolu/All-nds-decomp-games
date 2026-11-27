/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010bac();                            /* extern */

void func_0201089c(void *arg0, s32 arg1, s32 arg2) {
    func_02010bac();
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0) >> arg2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 4) >> arg2);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 8) >> arg2);
}
