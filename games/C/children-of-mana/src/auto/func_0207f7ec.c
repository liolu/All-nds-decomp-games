/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_02096028(s32);                          /* extern */
M2C_UNK func_02096154(s32, s32);                    /* extern */
s32 func_020961fc(s32);                             /* extern */
s32 func_020965ec(s32);                             /* extern */

s32 func_0207f7ec(void *arg0) {
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x3BC) != 0) && (func_020961fc(M2C_FIELD(arg0, s32 *, 0x1C0)) == 0)) {
        var_r4 = func_020965ec(M2C_FIELD(arg0, s32 *, 0x1C0));
        func_02096154(M2C_FIELD(arg0, s32 *, 0x1C0), var_r4);
        if (var_r4 != 0) {
            temp_r0 = func_02096028(var_r4);
            M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 8)(temp_r0, M2C_FIELD(arg0, s32 *, 0x220));
        }
    }
    return var_r4;
}
