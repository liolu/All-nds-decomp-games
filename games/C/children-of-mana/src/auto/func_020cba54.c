/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b969c(void *);                      /* extern */
M2C_UNK func_020bffa4(s32, void *);                 /* extern */

void func_020cba54(void *arg0) {
    s32 temp_r1;

    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x28C);
    M2C_FIELD(arg0, s32 *, 0x28C) = (s32) (temp_r1 + 1);
    if (temp_r1 >= 0x1E) {
        func_020bffa4(M2C_FIELD(arg0, s32 *, 0x10), arg0);
        M2C_FIELD(arg0, s32 *, 0x28C) = 0;
    }
    func_020b969c(arg0);
}
