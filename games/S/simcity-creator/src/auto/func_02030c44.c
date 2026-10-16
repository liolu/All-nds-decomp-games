#include "m2c.h"

M2C_UNK func_02028e84(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02030a2c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02030a7c(void *);                      /* extern */
extern M2C_UNK data_020d9118;

void func_02030c44(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02028e84(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02028e84(&data_020d9118, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02030a2c(temp_r4, arg0);
    }
    func_02030a7c(arg0);
}
