#include "m2c.h"

M2C_UNK func_020b4cb4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020c8800(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020c8850(void *);                      /* extern */
extern M2C_UNK data_021df998;

void func_020c8a18(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020b4cb4(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020b4cb4(&data_021df998, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020c8800(temp_r4, arg0);
    }
    func_020c8850(arg0);
}
