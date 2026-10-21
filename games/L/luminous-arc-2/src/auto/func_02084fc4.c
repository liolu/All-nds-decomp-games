#include "m2c.h"

s32 func_02083a48();                                /* extern */
M2C_UNK func_0208571c(M2C_UNK);                     /* extern */
M2C_UNK func_02087100(void *, void *, M2C_UNK *, M2C_UNK, s32, s32, s32, s32); /* extern */
extern void *data_02170354;
extern M2C_UNK func_020859f0;

s32 func_02084fc4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r1;

    if ((func_02083a48() != 0) || (temp_r1 = M2C_FIELD(data_02170354, s32 *, 0x24), (temp_r1 < 3)) || (temp_r1 == 4)) {
        return 0;
    }
    M2C_FIELD(data_02170354, s32 *, 0x78) = arg1;
    M2C_FIELD(data_02170354, s32 *, 0x7C) = arg2;
    func_0208571c(4);
    func_02087100(data_02170354 + 0xE0, data_02170354 + 0x1E0, &func_020859f0, 0, arg3, arg4, arg5, arg6);
    return 1;
}
