#include "m2c.h"

M2C_UNK func_0207d4cc();                      /* extern */
M2C_UNK func_020c34f8();                      /* extern */
extern M2C_UNK data_020fd678;

void *func_0207f424(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd678;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_0207d4cc();
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x30);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x30) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    func_020c34f8(arg0);
    func_0207d4cc(arg0);
    return arg0;
}
