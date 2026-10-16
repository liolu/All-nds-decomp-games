/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02067278(void);
void func_0206728c(M2C_UNK);

extern s32 data_020e8364;

s32 func_0206e02c(void) {
    s32 temp_r0;

    temp_r0 = func_02067278();
    if (data_020e8364 != 0) {
        func_0206728c(temp_r0);
        return 0;
    }
    data_020e8364 = 1;
    func_0206728c(temp_r0);
    return 1;
}
