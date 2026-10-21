/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc154(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020bcc24(void *);                      /* extern */
M2C_UNK func_020bcc84(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020f5064;

void func_020bca1c(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020bc154(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020bc154(&data_020f5064, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020bcc84(temp_r4, arg0);
    }
    func_020bcc24(arg0);
}
