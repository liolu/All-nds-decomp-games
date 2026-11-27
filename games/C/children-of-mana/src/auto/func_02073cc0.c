/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020633ac(s32, M2C_UNK);                /* extern */
extern s32 data_0212329c;

void func_02073cc0(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020633ac(arg0, 0);
    data_0212329c &= ~arg0;
}
