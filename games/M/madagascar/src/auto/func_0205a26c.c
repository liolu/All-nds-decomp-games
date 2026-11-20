/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020522cc(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205a474(void *);                      /* extern */
M2C_UNK func_0205a4d4(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020da06c;

void func_0205a26c(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020522cc(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020522cc(&data_020da06c, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0205a4d4(temp_r4, arg0);
    }
    func_0205a474(arg0);
}
