/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206b8a8(s32, M2C_UNK);                /* extern */
extern s32 data_02182efc;

void func_02063954(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0206b8a8(arg0, 0);
    data_02182efc &= ~arg0;
}
