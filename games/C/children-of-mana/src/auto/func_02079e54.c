/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0203fd04();                         /* extern */
M2C_UNK func_0203fd80();                         /* extern */
M2C_UNK func_02078ca8();                      /* extern */

void func_02079e54(void *arg0) {
    func_0203fd04(arg0 + 0x60);
    func_0203fd80(arg0 + 0x1C);
    func_02078ca8(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x1C0) == 0) {
        return;
    }
    func_0200e0f8();
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
}
