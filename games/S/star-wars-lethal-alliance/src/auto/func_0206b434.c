/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206b490();                            /* extern */
extern s32 data_020e8278;

void func_0206b434(s32 arg0) {
    if (data_020e8278 != 0) {
        return;
    }
    data_020e8278 = 1;
    func_0206b490(arg0);
}
