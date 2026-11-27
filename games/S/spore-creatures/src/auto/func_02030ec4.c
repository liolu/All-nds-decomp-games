#include "m2c.h"

s32 func_02003f88();                                /* extern */
M2C_UNK func_02004a14(s32, s32 *);                  /* extern */
M2C_UNK func_0208cb10(s32, M2C_UNK);                /* extern */
M2C_UNK func_0208cc24(s32, M2C_UNK);                /* extern */

void func_02030ec4(void *arg0) {
    s32 sp0;

    func_0208cc24(M2C_FIELD(arg0, s32 *, 0x40), 0);
    func_0208cb10(M2C_FIELD(arg0, s32 *, 0x40), 0);
    sp0 = 0xA;
    func_02004a14(func_02003f88(), &sp0);
}
