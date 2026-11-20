/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
s32 func_02056ae0();                                /* extern */
M2C_UNK func_020584a8(M2C_UNK *);                   /* extern */
s32 func_020586bc();                                /* extern */
extern void *data_0206ef98;
extern M2C_UNK func_02056ad4;

s32 func_02056a4c(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = _ZN3IRQ7DisableEv();
    if (M2C_FIELD(data_0206ef98, u16 *, 0x526) == 0) {
        M2C_FIELD(data_0206ef98, s32 *, 0x5E4) = 0;
        M2C_FIELD(data_0206ef98, u16 *, 0x526) = 1U;
        if (func_020586bc() != 0) {
            func_020584a8(&func_02056ad4);
            var_r5 = 0;
        } else {
            var_r5 = func_02056ae0();
        }
    }
    _ZN3IRQ7RestoreEj(temp_r4);
    return var_r5;
}
