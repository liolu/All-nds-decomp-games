/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205be68(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02057a4c(void *);                      /* extern */
M2C_UNK func_02057aac(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020b3f94;

void func_02057844(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0205be68(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0205be68(&data_020b3f94, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02057aac(temp_r4, arg0);
    }
    func_02057a4c(arg0);
}
