/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_021210f0i(M2C_UNK);             /* extern */
s32 func_020615a0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_0210b6a4;
extern M2C_UNK (*data_02129ec8)(M2C_UNK *);
extern s32 data_02129ed8;
extern M2C_UNK func_020d0c5c;

void func_020d028c(s32 arg0) {
    data_02129ed8 = arg0;
    if (func_020615a0(0xE, &func_020d0c5c, 0) == 0) {
        return;
    }
    _Z16unkfunc_021210f0i(9);
    if (data_02129ec8 == NULL) {
        return;
    }
    data_02129ec8(&data_0210b6a4);
}
