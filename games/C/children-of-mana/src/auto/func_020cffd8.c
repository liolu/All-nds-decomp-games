/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
s32 func_02061b78(M2C_UNK *);                       /* extern */
extern M2C_UNK _Z16unkfunc_02121ee8Pv;
extern s32 data_02129ed0;

s32 func_020cffd8(void) {
    if (data_02129ed0 != 1) {
        func_0205c9c4();
    }
    _Z16unkfunc_021210f0i(3);
    if (func_02061b78(&_Z16unkfunc_02121ee8Pv) == 2) {
        return 1;
    }
    _Z16unkfunc_021210f0i(9);
    return 0;
}
