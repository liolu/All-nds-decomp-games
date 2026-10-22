/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0212706c;
extern M2C_UNK data_02127098;

void *func_0204dd54(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02127098;
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212706c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    func_02059f70(arg0);
    return arg0;
}
