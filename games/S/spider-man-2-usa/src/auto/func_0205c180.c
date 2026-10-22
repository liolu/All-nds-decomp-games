/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205acd8();                            /* extern */
M2C_UNK func_0205c23c();                            /* extern */
M2C_UNK func_0205cb58();                            /* extern */
M2C_UNK func_0205cf90();                            /* extern */
extern s32 data_021632f4;

void func_0205c180(void) {
    if (data_021632f4 != 0) {
        return;
    }
    data_021632f4 = 1;
    func_0205acd8();
    func_0205c23c();
    func_0205cf90();
    func_0205cb58();
}
