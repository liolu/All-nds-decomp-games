/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
u16 _Z16unkfunc_0212244ct(u16);                     /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
extern M2C_UNK data_0210b750;
extern u16 data_02129ea8;
extern u16 data_02129ebc;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *, u16);
extern s32 data_02129ed0;

u16 func_020d08a8(void) {
    if (data_02129ed0 != 7) {
        func_0205c9c4();
    }
    _Z16unkfunc_021210f0i(1);
    data_02129ea8 = _Z16unkfunc_0212244ct(data_02129ebc);
    if (data_02129ec8 != NULL) {
        data_02129ec8(&data_0210b750, data_02129ea8);
    }
    return data_02129ea8;
}
