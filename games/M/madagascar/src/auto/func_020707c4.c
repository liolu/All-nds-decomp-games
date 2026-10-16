/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
s32 func_02070858();                                /* extern */
M2C_UNK func_02072238(M2C_UNK *);                   /* extern */
s32 func_0207244c();                                /* extern */
extern void *data_020ded58;
extern M2C_UNK func_0207084c;

s32 func_020707c4(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_02063cf8();
    if (M2C_FIELD(data_020ded58, u16 *, 0x526) == 0) {
        M2C_FIELD(data_020ded58, s32 *, 0x5E4) = 0;
        M2C_FIELD(data_020ded58, u16 *, 0x526) = 1U;
        if (func_0207244c() != 0) {
            func_02072238(&func_0207084c);
            var_r5 = 0;
        } else {
            var_r5 = func_02070858();
        }
    }
    func_02063d0c(temp_r4);
    return var_r5;
}
