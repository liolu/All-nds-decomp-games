/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205aef0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0205b248();                                /* extern */
M2C_UNK func_0205b274(s32);                         /* extern */
M2C_UNK func_0205b304(M2C_UNK);                     /* extern */
M2C_UNK func_0205cc00(void *);                      /* extern */

void func_0205cc30(void *arg0) {
    s32 temp_r4;

    func_0205aef0(M2C_FIELD(arg0, s32 *, 0x2C), 0, 1 << M2C_FIELD(arg0, s32 *, 0x28), 0);
    temp_r4 = func_0205b248();
    func_0205b304(1);
    func_0205b274(temp_r4);
    func_0205cc00(arg0);
}
