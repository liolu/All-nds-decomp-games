#include "m2c.h"

M2C_UNK func_0204da18(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02057cd0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02057d20(void *);                      /* extern */
extern M2C_UNK data_020b0078;

void func_02057ee8(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0204da18(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0204da18(&data_020b0078, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02057cd0(temp_r4, arg0);
    }
    func_02057d20(arg0);
}
