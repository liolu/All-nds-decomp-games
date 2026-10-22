/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201fc20(s32);                         /* extern */
M2C_UNK func_0201fce8(s32, M2C_UNK);                /* extern */

void func_02013ca8(s32 arg0, s32 arg1) {
    func_0201fc20(arg0 + 0x14);
    if (arg1 == 0) {
        func_0201fce8(arg0 + 0x14, 0);
    }
    func_0201fce8(arg0 + 0x14, 1);
    func_0201fce8(arg0 + 0x14, 2);
    func_0201fce8(arg0 + 0x14, 3);
    func_0201fce8(arg0 + 0x14, 4);
}
