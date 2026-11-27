/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
s32 func_020d1a10();                                /* extern */
extern s16 data_02129eb4;
extern s16 data_02129eb8;
extern s32 data_02129ec4;
extern s32 data_02129ed0;
extern M2C_UNK data_02129f20;

s32 func_020d1b18(s32 arg0, void *arg1, s16 arg2) {
    if (data_02129ed0 == 4) {
        func_0205c9c4();
    }
    _Z16unkfunc_021210f0i(2);
    data_02129ec4                         = arg0;
    data_02129eb4                         = arg2;
    M2C_FIELD(&data_02129f20, s16 *, 4)   = 0;
    data_02129eb8                         = 0;
    M2C_FIELD(&data_02129f20, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(&data_02129f20, u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(&data_02129f20, u16 *, 8)   = (u16) M2C_FIELD(arg1, u16 *, 0);
    if (func_020d1a10() != 0) {
        return 1;
    }
    _Z16unkfunc_021210f0i(9);
    return 0;
}
