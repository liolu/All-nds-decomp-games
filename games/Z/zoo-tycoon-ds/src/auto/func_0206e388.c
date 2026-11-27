/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206e458();                            /* extern */
extern s32 data_02186598;

void func_0206e388(s32 arg0) {
    if (data_02186598 != 0) {
        return;
    }
    data_02186598 = 1;
    func_0206e458(arg0);
}
