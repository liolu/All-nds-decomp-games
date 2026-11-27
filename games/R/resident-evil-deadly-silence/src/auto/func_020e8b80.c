/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e8c0c(void *);                      /* extern */
M2C_UNK _fadd(M2C_UNK, s32);                /* extern */
s32 _fdiv(s32, s32);                        /* extern */
s32 _ffix();                                /* extern */
s32 _fflt(M2C_UNK);                         /* extern */

void func_020e8b80(void *arg0, M2C_UNK arg1) {
    if (arg0 == NULL) {
        return;
    }
    _fadd(0x3F000000, _fdiv(0x48FFB0E0, _fflt(arg1)));
    M2C_FIELD(arg0, s32 *, 0x10) = _ffix();
    func_020e8c0c(arg0);
}
