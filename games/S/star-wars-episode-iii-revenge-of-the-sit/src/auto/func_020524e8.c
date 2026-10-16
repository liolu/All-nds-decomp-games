/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020541ec(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02056e6c(s8 *, s32);                   /* extern */
extern s32 data_020b3cf4;

void func_020524e8(s8 arg0, M2C_UNK arg1) {
    s8 sp0;

    sp0 = arg0;
    func_02056e6c(&sp0, data_020b3cf4);
    func_020541ec(6, arg1, data_020b3cf4);
}
