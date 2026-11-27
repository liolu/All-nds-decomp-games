/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov014_0213e0c0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_ov014_021483dc;
extern M2C_UNK data_ov014_021483f8;

s32 func_ov014_0213da68(void *arg0) {
    s32 (*temp_r3)(s32);
    s32 var_r4;

    if (arg0 == NULL) {
        func_ov014_0213e0c0(&data_ov014_021483dc);
        return 0;
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32(**)(s32), 0x1C);
    if (temp_r3 != NULL) {
        var_r4 = temp_r3(M2C_FIELD(arg0, s32 *, 4));
    } else {
        var_r4 = 0;
        func_ov014_0213e0c0(&data_ov014_021483f8);
    }
    return var_r4;
}
