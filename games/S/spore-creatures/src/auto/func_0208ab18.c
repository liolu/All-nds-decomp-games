#include "m2c.h"

M2C_UNK func_0200894c(M2C_UNK *, void *, void **, s32 *); /* extern */
M2C_UNK func_0208a89c();                            /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020dfd5c;

void *func_0208ab18(void *arg0) {
    M2C_UNK sp8;
    void *sp4;
    s32 sp0;
    void **temp_r0;
    void *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfd5c;
    func_0208a89c();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r1 = arg0 + 0x10;
    sp0     = M2C_FIELD(arg0, s32 *, 0x14);
    sp4     = temp_r1;
    func_0200894c(&sp8, temp_r1, &sp4, &sp0);
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
