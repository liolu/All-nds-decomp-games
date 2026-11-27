/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020aac90();                              /* extern */
extern M2C_UNK data_02126cfc;

void func_020aa3c0(s32 arg0) {
    s32 var_r2;
    void *temp_r0;

    temp_r0 = func_020aac90();
    var_r2  = M2C_FIELD(temp_r0, s16 *, 0x424) + 1;
    if (var_r2 < 0) {
        var_r2 = 0;
    } else if (var_r2 > 0x3E7) {
        var_r2 = 0x3E7;
    }
    M2C_FIELD(temp_r0, s16 *, 0x424) = (s16) var_r2;
    M2C_FIELD(temp_r0, s16 *, 0x426) =
        (s16) (M2C_FIELD(temp_r0, s16 *, 0x426) + *((s16 *) ((s8 *) &data_02126cfc + (arg0 * 2))));
}
