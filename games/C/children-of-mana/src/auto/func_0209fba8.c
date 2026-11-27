/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_0209f280(void *);                      /* extern */
extern M2C_UNK data_02104e3c;

void *func_0209fba8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104e3c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x104);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x104) = NULL;
    }
    func_0209f280(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
