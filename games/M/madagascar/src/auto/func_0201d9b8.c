/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003358(void *);                      /* extern */
M2C_UNK func_02024b28(void *);                      /* extern */
extern M2C_UNK data_020bd6cc;
extern M2C_UNK data_020beb64;

void *func_0201d9b8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020beb64;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x70);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &data_020bd6cc;
    func_02024b28(arg0 + 0x30);
    func_02003358(arg0);
    return arg0;
}
