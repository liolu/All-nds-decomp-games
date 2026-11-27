/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206a2e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0206a35c(M2C_UNK *);                   /* extern */
M2C_UNK func_0206456c(void *);                      /* extern */
M2C_UNK func_02066348(void *);                      /* extern */
extern M2C_UNK data_02183848;

void func_0206611c(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x128)) {
        return;
    }
    func_0206a35c(&data_02183848);
    func_02066348(arg2);
    M2C_FIELD(arg2, s32 *, 0x128) = 0;
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s8 *, 0x120)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x11C) > 0) {
        func_0206456c(arg2);
        M2C_FIELD(arg2, s32 *, 0x11C) = 0;
    }
    func_0206a2e8(&data_02183848);
}
