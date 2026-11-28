/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_020248dc();                            /* extern */
M2C_UNK func_0201c8ec();                            /* extern */
extern void *data_020ec28c;

void func_0201c8ac(void) {
    s32 temp_r4;

    temp_r4 = func_02024624();
    if (M2C_FIELD(data_020ec28c, s32 *, 0x1320) == 0) {
        func_020248dc();
    }
    func_0201c8ec();
    func_02024638(temp_r4);
}
