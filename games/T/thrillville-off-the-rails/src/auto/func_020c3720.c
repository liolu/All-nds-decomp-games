#include "m2c.h"

M2C_UNK func_020c3854(void *, void *);              /* extern */
M2C_UNK func_020c6bb0();                            /* extern */
M2C_UNK func_020c834c(s32, void *);                 /* extern */
extern M2C_UNK data_020e6f70;
extern s32 data_020fd278;

void *func_020c3720(void *arg0, s32 arg1, s32 arg2) {
    func_020c6bb0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e6f70;
    M2C_FIELD(arg0, s32 *, 0xB0)   = 0;
    if (arg2 == 0) {
        func_020c834c(data_020fd278, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) & ~0x80000000);
    func_020c3854(arg0, arg0);
    return arg0;
}
