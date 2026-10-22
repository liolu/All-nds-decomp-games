/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_0202e6c4(void *);                          /* extern */
M2C_UNK func_0202e72c(s32 *, void *, s32);          /* extern */

void func_0202e6e0(void *arg0) {
    s32 sp0;

    sp0 = 0;
    func_0202e72c(&sp0, arg0, 0x05000025);
    M2C_FIELD(arg0, s32 *, 0)    = 0x3F219FD2;
    M2C_FIELD(arg0, s16 *, 0x90) = func_0202e6c4(arg0);
}
