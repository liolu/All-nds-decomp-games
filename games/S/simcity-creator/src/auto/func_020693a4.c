#include "m2c.h"

M2C_UNK func_02002228();                            /* extern */
M2C_UNK func_02002298();                            /* extern */
M2C_UNK func_020022ac();                            /* extern */
M2C_UNK func_0206b230();                            /* extern */
M2C_UNK func_0206b27c(void *);                      /* extern */
M2C_UNK func_0206b2d0(void *);                      /* extern */
M2C_UNK func_0206b328(void *);                      /* extern */
M2C_UNK func_0206b488(void *);                      /* extern */
M2C_UNK func_0206b4d8(void *);                      /* extern */
M2C_UNK func_0206b534(void *);                      /* extern */
M2C_UNK func_0206b8ac(void *);                      /* extern */
M2C_UNK func_0206c054(void **);                     /* extern */
M2C_UNK func_0207012c(s32, M2C_UNK);                /* extern */

void *func_020693a4(void *arg0) {
    void **temp_r0;

    func_0206b230();
    func_0206b27c(arg0);
    func_0206b2d0(arg0);
    func_0206b488(arg0);
    func_0206b534(arg0);
    func_0206b4d8(arg0);
    func_0206b328(arg0);
    func_0206b8ac(arg0);
    func_02002228();
    func_02002298();
    func_020022ac();
    func_0206c054(M2C_FIELD(arg0, void ***, 0x34));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x34);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0207012c(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    return arg0;
}
