/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020449c4(void);
void func_020449d8(M2C_UNK);

extern s32 data_020b01fc;
extern s32 data_020b0200;

void func_020460bc(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020449c4();
    if (data_020b0200 == 0) {
        data_020b0200 = arg0;
        data_020b01fc = arg0;
    } else {
        *(M2C_UNK *) data_020b0200 = arg0;
        data_020b0200              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_020449d8(temp_r0);
}
