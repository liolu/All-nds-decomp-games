/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK _Z16unkfunc_02121100i();                    /* extern */
s32 func_02061fc0(M2C_UNK *, M2C_UNK *, u16, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 data_02129ecc;
extern s32 data_02129ed0;
extern s32 data_02129eec;
extern M2C_UNK data_0212a240;
extern M2C_UNK data_0212a460;
extern M2C_UNK func_020d1da8;

s32 func_020d1f20(void) {
    if ((u32) (data_02129ed0 - 4) <= 2U) {
        return 1;
    }
    _Z16unkfunc_021210f0i(4);
    if (func_02061fc0(&func_020d1da8, &data_0212a460, (u16) data_02129eec, &data_0212a240, (s32) (u16) data_02129ecc, 1, 0, 0,
                      0, 0, 0) == 2) {
        return 1;
    }
    _Z16unkfunc_02121100i();
    return 0;
}
