/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c8070(void);
void func_020c8084(M2C_UNK);

extern s32 data_020f6d08;
extern s32 data_020f6d0c;
extern s32 data_020f6d24;

s32 func_020c9370(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020c8070();
    if (data_020f6d0c == 0) {
        var_r4 = data_020f6d08;
    } else {
        var_r4 = data_020f6d24;
    }
    func_020c8084(temp_r0);
    return var_r4;
}
