/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02043c80(M2C_UNK *);                   /* extern */
M2C_UNK func_020462d0();                            /* extern */
M2C_UNK func_0204649c();                            /* extern */
extern s32 data_020b01dc;
extern M2C_UNK data_020b01e0;

void func_02045be4(void) {
    if (data_020b01dc != 0) {
        return;
    }
    data_020b01dc = 1;
    func_02043c80(&data_020b01e0);
    func_020462d0();
    func_0204649c();
}
