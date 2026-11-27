/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ba64(void *);                      /* extern */
M2C_UNK func_0201c6ec(void *);                      /* extern */
M2C_UNK func_02048958();                            /* extern */

void func_02094f68(void *arg0) {
    s32 temp_r0;

    func_02048958();
    if (M2C_FIELD(arg0, u8 *, 0x4C4) == 0) {
        return;
    }
    func_0201ba64(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C8);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C8) = (s32) (temp_r0 - 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C8) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C8) = 0xF;
    func_0201c6ec(arg0);
}
