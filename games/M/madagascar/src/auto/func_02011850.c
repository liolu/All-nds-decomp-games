/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02002720(s32);                             /* extern */
M2C_UNK func_020242d4(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024654();                                /* extern */
extern M2C_UNK data_02087b54;

s32 func_02011850(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = M2C_FIELD(arg1, s32 *, 8) & M2C_FIELD(arg0, s32 *, 0x130);
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x128);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    func_020242d4(func_02024654(), &data_02087b54, 0);
    return func_02002720(M2C_FIELD(arg0, s32 *, 0x128));
}
