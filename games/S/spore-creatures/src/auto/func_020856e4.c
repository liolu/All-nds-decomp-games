#include "m2c.h"

M2C_UNK func_020ae794(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020854cc(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0208551c(void *);                      /* extern */
extern M2C_UNK data_020e5240;

void func_020856e4(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020ae794(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020ae794(&data_020e5240, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020854cc(temp_r4, arg0);
    }
    func_0208551c(arg0);
}
