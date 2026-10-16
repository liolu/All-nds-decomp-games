#include "m2c.h"

M2C_UNK func_0206f92c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0206d32c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0206d2d0(void *);                      /* extern */
extern M2C_UNK data_0209162c;

void func_0206d0e8(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0206f92c(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0206f92c(&data_0209162c, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0206d32c(temp_r4, arg0);
    }
    func_0206d2d0(arg0);
}
