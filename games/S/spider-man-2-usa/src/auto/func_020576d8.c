/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205758c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020575a0(M2C_UNK, s32);                /* extern */
s32 func_020575b4(M2C_UNK);                         /* extern */
s32 func_02057628(M2C_UNK);                         /* extern */
extern s32 data_02161528;

void func_020576d8(void) {
    if (data_02161528 != 0) {
        return;
    }
    data_02161528 = 1;
    func_020575a0(0, func_02057628(0));
    func_0205758c(0, func_020575b4(0));
    func_0205758c(2, 0);
    func_020575a0(2, 0);
    func_020575a0(3, func_02057628(3));
    func_0205758c(3, func_020575b4(3));
    func_020575a0(4, func_02057628(4));
    func_0205758c(4, func_020575b4(4));
    func_020575a0(5, func_02057628(5));
    func_0205758c(5, func_020575b4(5));
    func_020575a0(6, func_02057628(6));
    func_0205758c(6, func_020575b4(6));
}
