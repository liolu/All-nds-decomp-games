#include "m2c.h"

M2C_UNK func_02084860(M2C_UNK *, void *, void **, void **); /* extern */
void *func_02093474(s32, M2C_UNK, M2C_UNK);         /* extern */
extern M2C_UNK data_020e2e14;

void *func_0208457c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp8;
    M2C_UNK sp4;
    void *sp0;
    M2C_UNK var_r1;
    void *temp_r0;
    void *temp_r1;

    var_r1 = 0;
    sp8    = NULL;
    if (arg0 == 1) {
        var_r1 = 1;
    }
    temp_r0 = func_02093474(((arg1 + 0x1F) & ~0x1F) + 0x20, var_r1, 0x20);
    sp8     = temp_r0;
    if (temp_r0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x18) = 0;
    temp_r1                         = (M2C_UNK *) ((s8 *) &data_020e2e14 + (arg0 * 8));
    sp0                             = temp_r1;
    func_02084860(&sp4, temp_r1, &sp0, &sp8);
    return temp_r0 + 0x20;
}
