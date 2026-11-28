/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02022980(void);
M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

s32 func_02025b38(void) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_02022980() == 0) {
        return 1;
    }
    temp_r0             = func_02024624();
    *(s32 *) 0x04FFF200 = 0x10;
    temp_r4             = *(s32 *) 0x04FFF200;
    func_02024638(temp_r0);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
