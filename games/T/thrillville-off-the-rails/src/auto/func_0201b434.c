/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020211ac(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0201ada0(s32);                         /* extern */
M2C_UNK func_0201aefc(s32);                         /* extern */
extern s32 data_020ec10c;

void func_0201b434(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x590;
    if (M2C_FIELD(arg0, u16 *, 0x48) == M2C_FIELD((data_020ec10c + temp_r4), u16 *, 0x518)) {
        return;
    }
    func_0201ada0(arg1);
    func_020211ac(arg0, data_020ec10c + 0x4D0 + temp_r4, 0xC0);
    func_0201aefc(arg1);
}
