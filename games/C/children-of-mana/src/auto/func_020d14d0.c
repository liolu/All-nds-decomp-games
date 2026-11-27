/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_02061750(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0210b8a8;
extern s32 data_02129ec0;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *);
extern s32 data_02129ed0;
extern M2C_UNK data_02129f80;
extern M2C_UNK func_020d12e4;

s32 func_020d14d0(void) {
    u16 var_r0;

    if ((u32) (data_02129ed0 - 4) <= 2U) {
        if (data_02129ec8 != NULL) {
            data_02129ec8(&data_0210b8a8);
        }
        return 1;
    }
    _Z16unkfunc_021210f0i(3);
    if (data_02129ec0 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (func_02061750(&func_020d12e4, &data_02129f80, 0, 1, (s32) var_r0) == 2) {
        return 1;
    }
    _Z16unkfunc_02121100i();
    return 0;
}
