#include "m2c.h"

M2C_UNK func_0208aaa4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0208be98(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0208bee8(void *);                      /* extern */
extern M2C_UNK data_020ddb98;

void func_0208c0b0(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0208aaa4(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0208aaa4(&data_020ddb98, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0208be98(temp_r4, arg0);
    }
    func_0208bee8(arg0);
}
