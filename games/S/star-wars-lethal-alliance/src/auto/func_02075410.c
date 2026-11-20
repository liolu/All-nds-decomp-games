/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a260(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02075618(void *);                      /* extern */
M2C_UNK func_02075678(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020ea7ec;

void func_02075410(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0207a260(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0207a260(&data_020ea7ec, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02075678(temp_r4, arg0);
    }
    func_02075618(arg0);
}
