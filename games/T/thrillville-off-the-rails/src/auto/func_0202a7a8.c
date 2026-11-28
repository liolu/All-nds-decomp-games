/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern void *data_020eec34;

s32 func_0202a7a8(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_02024624();
    if (data_020eec34 != NULL) {
        var_r4 = M2C_FIELD(data_020eec34, u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_02024638(temp_r0);
    return (s32) var_r4;
}
