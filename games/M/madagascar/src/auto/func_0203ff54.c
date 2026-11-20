/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020420ac(void *);                      /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020c3e68;

void *func_0203ff54(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c3e68;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x1FC);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x1F8);
    if ((temp_r0_2 != NULL) && (temp_r0_2 != NULL)) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_020420ac(arg0);
    func_0207b040(arg0);
    return arg0;
}
