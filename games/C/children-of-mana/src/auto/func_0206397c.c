/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205c948(void);
void func_0205c95c(M2C_UNK);

extern s32 data_0211c81c;
extern s32 data_0211c820;
extern s32 data_0211c838;

s32 func_0206397c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0205c948();
    if (data_0211c820 == 0) {
        var_r4 = data_0211c81c;
    } else {
        var_r4 = data_0211c838;
    }
    func_0205c95c(temp_r0);
    return var_r4;
}
