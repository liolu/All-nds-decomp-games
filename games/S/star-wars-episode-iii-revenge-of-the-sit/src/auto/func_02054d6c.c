/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020449c4();                                /* extern */
M2C_UNK func_020449d8(s32);                         /* extern */
s32 func_02054e00();                                /* extern */
M2C_UNK func_02056844(M2C_UNK *);                   /* extern */
s32 func_02056a58();                                /* extern */
extern void *data_020b3cf8;
extern M2C_UNK func_02054df4;

s32 func_02054d6c(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_020449c4();
    if (M2C_FIELD(data_020b3cf8, u16 *, 0x526) == 0) {
        M2C_FIELD(data_020b3cf8, s32 *, 0x5E4) = 0;
        M2C_FIELD(data_020b3cf8, u16 *, 0x526) = 1U;
        if (func_02056a58() != 0) {
            func_02056844(&func_02054df4);
            var_r5 = 0;
        } else {
            var_r5 = func_02054e00();
        }
    }
    func_020449d8(temp_r4);
    return var_r5;
}
