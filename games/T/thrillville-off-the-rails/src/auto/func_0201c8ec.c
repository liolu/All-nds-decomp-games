/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
s32 func_0201c980();                                /* extern */
M2C_UNK func_0201e528(M2C_UNK *);                   /* extern */
s32 func_0201e738();                                /* extern */
extern void *data_020ec288;
extern M2C_UNK func_0201c974;

s32 func_0201c8ec(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_02024624();
    if (M2C_FIELD(data_020ec288, u16 *, 0x526) == 0) {
        M2C_FIELD(data_020ec288, s32 *, 0x5E4) = 0;
        M2C_FIELD(data_020ec288, u16 *, 0x526) = 1U;
        if (func_0201e738() != 0) {
            func_0201e528(&func_0201c974);
            var_r5 = 0;
        } else {
            var_r5 = func_0201c980();
        }
    }
    func_02024638(temp_r4);
    return var_r5;
}
