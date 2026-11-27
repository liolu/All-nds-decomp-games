#include "m2c.h"

M2C_UNK func_020c0138(void *);                      /* extern */
M2C_UNK func_020c3874(void **, u16 *, M2C_UNK);     /* extern */

void func_020c0b2c(void *arg0, u16 *arg1) {
    void **temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 == NULL) || (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0)) {
        func_020c0138(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x2A) = (u16) *arg1;
        temp_r1                                             = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r1, u16 *, 0x34)                     = (u16) (M2C_FIELD(temp_r1, u16 *, 0x34) | 0x40);
        return;
    }
    func_020c3874(M2C_FIELD(arg0, void ***, 0xC), arg1, 3);
}
