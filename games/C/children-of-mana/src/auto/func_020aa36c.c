/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020aac90();                              /* extern */
extern M2C_UNK data_02126d24;

void func_020aa36c(s32 arg0) {
    s32 var_r1;
    void *temp_r0;

    temp_r0 = func_020aac90();
    var_r1  = M2C_FIELD(temp_r0, s16 *, 0x428) + 1;
    if (var_r1 < 0) {
        var_r1 = 0;
    } else if (var_r1 > 0x63) {
        var_r1 = 0x63;
    }
    M2C_FIELD(temp_r0, s16 *, 0x428) = (s16) var_r1;
    M2C_FIELD(temp_r0, s16 *, 0x42A) =
        (s16) (M2C_FIELD(temp_r0, s16 *, 0x42A) + *((s16 *) ((s8 *) &data_02126d24 + (arg0 * 2))));
}
