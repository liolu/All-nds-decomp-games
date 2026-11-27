/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e46c8();                            /* extern */
extern void *data_0212e93c;
extern s32 data_0212e944;
extern s32 data_0212e948;

void func_020e5ad4(s32 arg0, u32 arg1) {
    if (data_0212e948 != 0) {
        return;
    }
    if (arg1 > (u32) M2C_FIELD(data_0212e93c, u16 *, 0x36)) {
        return;
    }
    if (data_0212e944 == 0) {
        return;
    }
    data_0212e944 = 0;
    func_020e46c8(arg0, arg1);
}
