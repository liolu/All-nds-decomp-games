/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201aefc();                            /* extern */
extern void *data_020ec108;
extern s32 data_020ec10c;

void func_0201b368(s32 arg0) {
    if (M2C_FIELD(data_020ec108, u8 *, 6) == M2C_FIELD(((arg0 * 0x590) + data_020ec10c), u8 *, 0x4C4)) {
        return;
    }
    func_0201aefc(arg0);
}
