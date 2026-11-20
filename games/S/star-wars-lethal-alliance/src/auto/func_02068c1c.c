/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02067278(void);
void func_0206728c(M2C_UNK);

extern s32 data_020e66a8;
extern s32 data_020e66ac;

void func_02068c1c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02067278();
    if (data_020e66ac == 0) {
        data_020e66ac = arg0;
        data_020e66a8 = arg0;
    } else {
        *(M2C_UNK *) data_020e66ac = arg0;
        data_020e66ac              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_0206728c(temp_r0);
}
