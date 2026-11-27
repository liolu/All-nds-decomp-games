/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_0204a6d4();                            /* extern */
extern M2C_UNK data_020feca8;

void *func_0204acc8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020feca8;
    func_0204a6d4();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    func_0200f2c4(arg0);
    return arg0;
}
