/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020280c0(void *);                      /* extern */
extern M2C_UNK data_020be6ac;

void *func_02019b50(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020be6ac;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xE4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020280c0(arg0);
    return arg0;
}
