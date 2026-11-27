/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011168(M2C_UNK);                     /* extern */
M2C_UNK func_020aecac(void *, M2C_UNK);             /* extern */
M2C_UNK func_020af550(void *, M2C_UNK);             /* extern */

void func_020aca84(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xFC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x22C) = 0;
        func_020af550(arg0, 0x17);
    } else {
        func_020aecac(arg0, 0);
    }
    func_02011168(0);
}
