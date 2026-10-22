/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff8084(void *);                          /* extern */
s32 func_01ff80ac(void *);                          /* extern */
s32 func_01ff80fc(void *);                          /* extern */
s32 func_01ffb0f0();                                /* extern */
s32 func_0202409c(void *);                          /* extern */
M2C_UNK func_020245c0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020259dc(void *);                      /* extern */
M2C_UNK func_020299cc(void *);                      /* extern */

void func_02027af4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3A4);
    if ((temp_r4 < func_01ffb0f0()) && (temp_r4 != 0) && (func_01ff80fc(arg0) != 0)) {
        if (func_0202409c(arg0) <= 0) {
            func_020299cc(arg0);
            return;
        }
        func_020259dc(arg0);
        return;
    }
    if ((func_01ff80ac(arg0) == 0) && (func_01ff8084(arg0) == 0)) {
        return;
    }
    func_020245c0(arg0, 1, 0);
}
