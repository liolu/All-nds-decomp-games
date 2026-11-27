#include "m2c.h"

s32 func_020c3558(void **);                         /* extern */
M2C_UNK func_ov000_02189e18(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov000_0219617c(void *);                    /* extern */

void func_020bf130(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x30) = func_020c3558(M2C_FIELD(arg0, void ***, 0xC));
    if (func_ov000_0219617c(M2C_FIELD(arg0, void **, 0x20)) != 0) {
        return;
    }
    func_ov000_02189e18(M2C_FIELD(arg0, void **, 0x20), 1, 0);
}
