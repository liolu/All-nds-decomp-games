/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern s32 data_020ec7b0;
extern s32 data_020ec7b4;
extern s32 data_020ec7cc;

s32 func_02025d9c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02024624();
    if (data_020ec7b4 == 0) {
        var_r4 = data_020ec7b0;
    } else {
        var_r4 = data_020ec7cc;
    }
    func_02024638(temp_r0);
    return var_r4;
}
