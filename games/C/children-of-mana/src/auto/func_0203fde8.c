/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020284f8(void *);                      /* extern */
M2C_UNK func_0204009c();                            /* extern */

void func_0203fde8(void *arg0) {
    func_0204009c();
    if (M2C_FIELD(arg0, s32 *, 0x20) == -1) {
        return;
    }
    func_020284f8(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
