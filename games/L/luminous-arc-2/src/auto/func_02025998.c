#include "m2c.h"

M2C_UNK func_02028f40(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02025780(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020257d0(void *);                      /* extern */
extern M2C_UNK data_02169ff8;

void func_02025998(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02028f40(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02028f40(&data_02169ff8, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02025780(temp_r4, arg0);
    }
    func_020257d0(arg0);
}
