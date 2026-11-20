/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202765c(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
extern s32 data_020d0274;
extern void **data_020d0278;

s32 func_0202772c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r2;
    void *temp_ip;
    void *var_r2;

    data_020d0274 = arg3;
    temp_ip       = *data_020d0278;
    temp_r2       = M2C_FIELD(temp_ip, s32 *, 4);
    if (temp_r2 != 0) {
        var_r2 = temp_ip + temp_r2;
    } else {
        var_r2 = NULL;
    }
    func_0202765c(arg0, arg1, var_r2, arg2);
    return data_020d0274 - arg3;
}
