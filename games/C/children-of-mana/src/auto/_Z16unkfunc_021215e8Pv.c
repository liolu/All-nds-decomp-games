/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 _Z16unkfunc_02121618v();                        /* extern */
M2C_UNK _Z16unkfunc_02122840v();                    /* extern */
extern M2C_UNK data_0210b9b8;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *);

void _Z16unkfunc_021215e8Pv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        _Z16unkfunc_02121100i();
        _Z16unkfunc_02122840v();
        return;
    }
    if (_Z16unkfunc_02121618v() != 0) {
        return;
    }
    if (data_02129ec8 != NULL) {
        data_02129ec8(&data_0210b9b8);
    }
    _Z16unkfunc_02122840v();
}
