/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_02062f14(M2C_UNK *);                       /* extern */
s32 func_020d0f64();                                /* extern */
extern s32 data_02129ed0;
extern M2C_UNK data_0212b100;

s32 func_020d0fa8(void) {
    if (data_02129ed0 != 6) {
        return 0;
    }
    _Z16unkfunc_021210f0i(3);
    if (func_02062f14(&data_0212b100) != 0) {
        _Z16unkfunc_02121100i();
        return 0;
    }
    if (func_020d0f64() != 0) {
        return 1;
    }
    return 0;
}
