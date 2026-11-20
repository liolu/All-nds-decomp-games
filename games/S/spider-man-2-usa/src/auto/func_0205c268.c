/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bae4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205c448(void *);                      /* extern */
M2C_UNK func_0205c4a8(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_02163310;

void func_0205c268(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_0205bae4(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_0205bae4(&data_02163310, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0205c4a8(temp_r4, arg0);
    }
    func_0205c448(arg0);
}
