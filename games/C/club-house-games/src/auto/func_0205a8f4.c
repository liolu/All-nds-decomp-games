#include "m2c.h"

M2C_UNK func_02057db0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205ab38(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205aadc(void *);                      /* extern */
extern M2C_UNK data_02262f2c;

void func_0205a8f4(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02057db0(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02057db0(&data_02262f2c, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0205ab38(temp_r4, arg0);
    }
    func_0205aadc(arg0);
}
