#include "m2c.h"

s32 func_ov013_0223f97c(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
void *func_ov013_02240300(s32);                     /* extern */
extern void *data_ov013_0224f50c;

void *func_ov013_0222ba78(M2C_UNK arg0) {
    M2C_UNK sp0;
    void *temp_r2;
    void *temp_r4;

    temp_r4                        = func_ov013_02240300(M2C_FIELD(data_ov013_0224f50c, s32 *, 0x60));
    M2C_FIELD(temp_r4, s32 *, 8)   = func_ov013_0223f97c(arg0, &sp0, 4);
    temp_r2                        = M2C_FIELD(temp_r4, s32 *, 8) + 0x20;
    M2C_FIELD(temp_r4, s32 *, 0)   = (s32) (temp_r2 + 0x10);
    M2C_FIELD(temp_r4, void **, 4) = (void *) (temp_r2 + M2C_FIELD(temp_r2, s32 *, 4) + 8);
    return temp_r4;
}
