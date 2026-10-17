/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b138(void *);                      /* extern */
M2C_UNK func_0205d5d8(void *);                      /* extern */
M2C_UNK func_02062ec8(M2C_UNK *);                   /* extern */
M2C_UNK func_02062f3c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020da9a4;

void func_0205d31c(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x124)) {
        return;
    }
    func_02062f3c(&data_020da9a4);
    func_0205d5d8(arg2);
    M2C_FIELD(arg2, s32 *, 0x124) = 0;
    M2C_FIELD(arg2, s32 *, 0x128) = 0;
    M2C_FIELD(arg2, s8 *, 0x11C)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x118) > 0) {
        func_0205b138(arg2);
        M2C_FIELD(arg2, s32 *, 0x118) = 0;
    }
    func_02062ec8(&data_020da9a4);
}
