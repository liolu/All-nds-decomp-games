/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201ada0();                            /* extern */
M2C_UNK func_0201aefc(s32);                         /* extern */
extern void *data_020ec108;
extern s32 data_020ec10c;

void func_0201b3b8(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 0x590;
    if (M2C_FIELD(data_020ec108, u8 *, 5) == M2C_FIELD((data_020ec10c + temp_r4), u8 *, 0x4C3)) {
        return;
    }
    func_0201ada0(arg0);
    func_0201aefc(arg0);
    M2C_FIELD((data_020ec10c + temp_r4), u8 *, 0x4C3) = (u8) M2C_FIELD(data_020ec108, u8 *, 5);
}
