/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205456c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205509c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205503c(void *);                      /* extern */
extern M2C_UNK data_02179e38;

void func_02054e34(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0205456c(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0205456c(&data_02179e38, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0205509c(temp_r4, arg0);
    }
    func_0205503c(arg0);
}
