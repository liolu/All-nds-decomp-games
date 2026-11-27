#include "m2c.h"

M2C_UNK func_0203c308(void *);                      /* extern */
M2C_UNK func_0208f560(s32);                         /* extern */
M2C_UNK func_0208fce8(s32);                         /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_0209d270(s32);                         /* extern */
M2C_UNK func_020cfb60(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02020c40;

void *func_02020e10(void *arg0) {
    void **temp_r0;

    func_0208fce8(arg0 + 0xB0);
    func_0208f560(arg0 + 0x80);
    func_0209d270(arg0 + 0x70);
    func_0209d270(arg0 + 0x60);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x5C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020cfb60(arg0 + 0x48, 5, 4, &func_02020c40);
    func_0203c308(arg0);
    func_020934a8(arg0);
    return arg0;
}
