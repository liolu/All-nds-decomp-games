/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_020630f8(M2C_UNK *, s32, M2C_UNK *);       /* extern */
extern s32 (*data_02129ec0)(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_02129f00;
extern M2C_UNK data_02129f80;
extern M2C_UNK func_020d1590;

s32 func_020d1604(void) {
    _Z16unkfunc_021210f0i(3);
    if (func_020630f8(&func_020d1590, data_02129ec0(&data_02129f00, &data_02129f80), &data_02129f00) == 2) {
        return 1;
    }
    _Z16unkfunc_02121100i();
    _Z16unkfunc_021210f0i(9);
    return 0;
}
