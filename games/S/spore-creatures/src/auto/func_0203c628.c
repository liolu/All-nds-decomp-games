#include "m2c.h"

M2C_UNK func_0200894c(M2C_UNK *, void *, void **, s32 *); /* extern */
M2C_UNK func_0208a89c(s32);                         /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020dfd5c;
extern M2C_UNK func_0203c4dc;
extern M2C_UNK func_0203c600;

void *func_0203c628(void *arg0) {
    s32 sp8;
    void *sp4;
    M2C_UNK sp0;
    void **temp_r0;
    void *temp_r1;

    func_020cfb60(arg0 + 0x58, 8, 0x24, &func_0203c4dc);
    func_020cfb60(arg0 + 0x38, 8, 4, &func_0203c600);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_020dfd5c;
    func_0208a89c(arg0 + 0x10);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x28);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r1 = arg0 + 0x20;
    sp8     = M2C_FIELD(arg0, s32 *, 0x24);
    sp4     = temp_r1;
    func_0200894c(&sp0, temp_r1, &sp4, &sp8);
    func_0208acbc(arg0 + 0x14);
    func_0208acbc(arg0 + 4);
    return arg0;
}
