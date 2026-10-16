#include "m2c.h"

M2C_UNK func_02000fb4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02003d34(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02003d84(void *);                      /* extern */
extern M2C_UNK data_02031a60;

void func_02003f4c(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02000fb4(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02000fb4(&data_02031a60, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02003d34(temp_r4, arg0);
    }
    func_02003d84(arg0);
}
