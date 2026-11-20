/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202fdfc(void *);                      /* extern */
M2C_UNK func_0202feb8(void *);                      /* extern */
M2C_UNK func_02030374(void *, s32);                 /* extern */

void func_02030a60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) M2C_FIELD(arg0, s32 *, 0x1F8);
    func_02030374(arg0, M2C_FIELD(arg0, s32 *, 0x1E4));
    if (M2C_FIELD(arg0, u8 *, 0x1F5) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1EC) = 4;
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        M2C_FIELD(arg0, u8 *, 0x1F5)  = 0U;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1F4) != 0) {
        func_0202fdfc(arg0);
        return;
    }
    func_0202feb8(arg0);
}
