/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 _Z16unkfunc_021215b8v();                        /* extern */
M2C_UNK _Z16unkfunc_02122840v();                    /* extern */
s32 func_02062f14(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0210b9d4;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *);
extern M2C_UNK data_0212b100;

s32 func_020d1ce0(void) {
    if (func_02062f14(&data_0212b100) != 0) {
        _Z16unkfunc_02121100i();
        return 0;
    }
    if (_Z16unkfunc_021215b8v() == 0) {
        if (data_02129ec8 != NULL) {
            data_02129ec8(&data_0210b9d4);
        }
        _Z16unkfunc_02122840v();
        return 0;
    }
    return 1;
}
