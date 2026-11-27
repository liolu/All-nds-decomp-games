/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203f058(void *);                      /* extern */
M2C_UNK func_0203f0ec(void *, void *, void *);      /* extern */
M2C_UNK func_0203f180(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0203f20c(void *);                      /* extern */
M2C_UNK func_0203f2c4(s32, s32, void *);            /* extern */
M2C_UNK func_0203f324(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0203f378(void *);                      /* extern */
M2C_UNK func_0203f3dc(s32, s32, void *);            /* extern */
M2C_UNK func_0203f43c(s32, void *, M2C_UNK);        /* extern */
s32 func_020c30ac();                                /* extern */

s32 func_020b81f8(void *arg0, s32 arg1) {
    if (func_020c30ac() == 0) {
        return 0;
    }
    if (arg1 == 0) {
        func_0203f3dc(M2C_FIELD(arg0, s32 *, 0x11C), M2C_FIELD(arg0, s32 *, 0x100), arg0 + 0x20);
        func_0203f2c4(M2C_FIELD(arg0, s32 *, 0x120), M2C_FIELD(arg0, s32 *, 0x104), arg0 + 0x20);
        func_0203f0ec(arg0 + 0x124, arg0 + 0x108, arg0 + 0x20);
    } else if (arg1 == 1) {
        func_0203f43c(M2C_FIELD(arg0, s32 *, 0x100), arg0 + 0x20, 1);
        func_0203f324(M2C_FIELD(arg0, s32 *, 0x104), arg0 + 0x20, 1);
        func_0203f180(arg0 + 0x108, arg0 + 0x20, 1);
    }
    func_0203f378(arg0 + 0x20);
    func_0203f20c(arg0 + 0x20);
    func_0203f058(arg0 + 0x20);
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    return 1;
}
