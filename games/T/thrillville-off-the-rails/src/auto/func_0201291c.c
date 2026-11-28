/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020129b4();                            /* extern */
extern s32 data_020ec020;

void func_0201291c(s32 arg0) {
    if (data_020ec020 != 0) {
        return;
    }
    data_020ec020 = 1;
    func_020129b4(arg0);
}
