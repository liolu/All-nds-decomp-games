/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(void *);                      /* extern */
M2C_UNK func_02047a9c(void *);                      /* extern */
extern M2C_UNK data_020c4b74;

void *func_02045cac(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c4b74;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x2DC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x2DC) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2AC) != 0) {
        func_02002744(arg0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x1E0);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_02047a9c(arg0);
    return arg0;
}
