/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_02121100i();             /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
s16 func_020611a8();                                /* extern */
s32 func_02061398();                                /* extern */
s32 func_02061868();                       /* extern */
extern u16 data_02129eb4;
extern s32 data_02129ed0;
extern M2C_UNK data_02129f20;
extern M2C_UNK data_02129f80;
extern M2C_UNK func_020d17c0;

s32 func_020d1a10(void) {
    s32 temp_r0;

    if (data_02129ed0 != 2) {
        func_0205c9c4();
    }
    temp_r0 = func_02061398();
    if (temp_r0 == 0x8000) {
        _Z16unkfunc_02121100i(3);
        return 0;
    }
    if (temp_r0 == 0) {
        _Z16unkfunc_02121100i(0x16);
        return 0;
    }
    if (data_02129eb4 == 0) {
        do {
            M2C_FIELD(&data_02129f20, u16 *, 4) = (u16) (M2C_FIELD(&data_02129f20, u16 *, 4) + 1);
            if ((u32) M2C_FIELD(&data_02129f20, u16 *, 4) > 0x10U) {
                M2C_FIELD(&data_02129f20, u16 *, 4) = 1U;
            }
        } while (!(temp_r0 & (1 << (M2C_FIELD(&data_02129f20, u16 *, 4) - 1))));
    } else {
        M2C_FIELD(&data_02129f20, u16 *, 4) = (u16) data_02129eb4;
    }
    M2C_FIELD(&data_02129f20, s16 *, 6)      = func_020611a8();
    M2C_FIELD(&data_02129f20, M2C_UNK **, 0) = &data_02129f80;
    if (func_02061868(&func_020d17c0) == 2) {
        return 1;
    }
    _Z16unkfunc_02121100i();
    return 0;
}
