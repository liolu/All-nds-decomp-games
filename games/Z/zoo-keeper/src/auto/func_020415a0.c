/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02040e2c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02041808(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020417a8(void *);                      /* extern */
extern M2C_UNK data_0206a244;

void func_020415a0(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02040e2c(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02040e2c(&data_0206a244, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02041808(temp_r4, arg0);
    }
    func_020417a8(arg0);
}
