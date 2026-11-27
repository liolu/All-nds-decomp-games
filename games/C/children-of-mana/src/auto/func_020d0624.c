/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_020615fc(M2C_UNK *);                       /* extern */
s32 func_020d05c8();                                /* extern */
extern M2C_UNK func_020d06fc;

void func_020d0624(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        _Z16unkfunc_02121100i();
        _Z16unkfunc_021210f0i(0xA);
        return;
    }
    if (func_020615fc(&func_020d06fc) != 0) {
        _Z16unkfunc_02121100i();
        _Z16unkfunc_021210f0i(0xA);
        return;
    }
    if (func_020d05c8() != 0) {
        return;
    }
    _Z16unkfunc_021210f0i(0xA);
}
