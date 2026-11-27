/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_020d14d0();                                /* extern */
extern M2C_UNK data_0210b8d4;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *);

void func_020d1590(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        _Z16unkfunc_02121100i();
        _Z16unkfunc_021210f0i(9);
        return;
    }
    if (func_020d14d0() != 0) {
        return;
    }
    if (data_02129ec8 != NULL) {
        data_02129ec8(&data_0210b8d4);
    }
    _Z16unkfunc_021210f0i(9);
}
