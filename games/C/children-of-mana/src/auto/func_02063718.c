/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205b6c4(void);
M2C_UNK func_0205c948(void);
void func_0205c95c(M2C_UNK);

s32 func_02063718(void) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_0205b6c4() == 0) {
        return 1;
    }
    temp_r0             = func_0205c948();
    *(s32 *) 0x04FFF200 = 0x10;
    temp_r4             = *(s32 *) 0x04FFF200;
    func_0205c95c(temp_r0);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
