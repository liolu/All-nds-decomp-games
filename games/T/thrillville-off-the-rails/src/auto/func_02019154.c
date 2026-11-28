/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201ad34(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020207e8(s8 *, s32);                   /* extern */
extern s32 data_020ec28c;

void func_02019154(s8 arg0, M2C_UNK arg1) {
    s8 sp0;

    sp0 = arg0;
    func_020207e8(&sp0, data_020ec28c);
    func_0201ad34(6, arg1, data_020ec28c);
}
