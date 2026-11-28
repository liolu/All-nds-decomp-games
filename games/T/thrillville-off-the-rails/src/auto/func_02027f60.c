/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern s32 data_020ee338;

s32 func_02027f60(void) {
    s32 temp_r0;

    temp_r0 = func_02024624();
    if (data_020ee338 != 0) {
        func_02024638(temp_r0);
        return 0;
    }
    data_020ee338 = 1;
    func_02024638(temp_r0);
    return 1;
}
