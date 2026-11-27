/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200f270(M2C_UNK, M2C_UNK);             /* extern */
M2C_UNK func_0203d14c(M2C_UNK);                     /* extern */
s32 func_020d5338(void **);                         /* extern */
M2C_UNK func_020d5348(void **);                     /* extern */
s32 func_020d5358(void **);                         /* extern */
M2C_UNK func_020d536c(void **, s32);                /* extern */
void **func_020d5b34(void **, u8);                  /* extern */
extern s32 data_02129c6c;
extern M2C_UNK data_02129c7c;

void func_020cc594(void *arg0) {
    s32 temp_r0_2;
    void **temp_r0;
    void **temp_r0_3;
    void **var_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x50);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0_2) {                            /* irregular */
        case 0:
            func_0203d14c(2);
            var_r0 = func_0200f270(0x4C, 0);
            if (var_r0 != NULL) {
                var_r0 = func_020d5b34(var_r0, M2C_FIELD(&data_02129c7c, u8 *, 0x10));
            }
            M2C_FIELD(arg0, void ***, 0x50) = var_r0;
            func_020d536c(M2C_FIELD(arg0, void ***, 0x50), data_02129c6c);
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
            return;
        case 1:
            if (func_020d5358(M2C_FIELD(arg0, void ***, 0x50)) == 0) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 2;
            func_020d5348(M2C_FIELD(arg0, void ***, 0x50));
            return;
        case 2:
            if (func_020d5338(M2C_FIELD(arg0, void ***, 0x50)) == 0) {
                return;
            }
            temp_r0_3 = M2C_FIELD(arg0, void ***, 0x50);
            if (temp_r0_3 != NULL) {
                if (temp_r0_3 != NULL) {
                    M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
                }
                M2C_FIELD(arg0, void ***, 0x50) = NULL;
            }
            if (M2C_FIELD(&data_02129c7c, s32 *, 0xC) == 3) {
                M2C_FIELD(arg0, s32 *, 0x20) = 4;
            } else {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            return;
    }
}
