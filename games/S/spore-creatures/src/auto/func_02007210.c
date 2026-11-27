#include "m2c.h"

M2C_UNK func_020ac024(M2C_UNK, u16 *);              /* extern */
M2C_UNK func_020ac310(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_02007210(M2C_UNK arg0, void *arg1) {
    u16 sp0;

    func_020ac310(arg0, arg1, 2);
    func_020ac024(arg0, &sp0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) sp0;
    func_020ac024(arg0, &sp0);
    M2C_FIELD(arg1, s32 *, 8) = (s32) sp0;
}
