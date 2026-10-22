/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201bd70(void *);                      /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern M2C_UNK data_021137dc;

void *func_0201c8e4(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021137dc;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x334);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02059f70(M2C_FIELD(arg0, s32 *, 0x34C));
    func_0201bd70(arg0);
    return arg0;
}
