/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205c948(void);
void func_0205c95c(M2C_UNK);

extern u32 data_0211c81c;

s32 func_02063928(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0205c948();
    if ((u32) arg0 > (u32) data_0211c81c) {
        if ((u32) (arg0 - data_0211c81c) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_0211c81c - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_0205c95c(temp_r0);
    return var_r4;
}
