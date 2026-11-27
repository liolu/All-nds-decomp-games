/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200f270(M2C_UNK);                      /* extern */
M2C_UNK func_020351a8(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020d5330(void **);                         /* extern */
s32 func_020d5338(void **);                         /* extern */
M2C_UNK func_020d5348(void **);                     /* extern */
s32 func_020d5358(void **);                         /* extern */
M2C_UNK func_020d536c(void **, M2C_UNK);            /* extern */
void **func_020d5b34(void **, M2C_UNK);             /* extern */
M2C_UNK func_020dd898(M2C_UNK);                     /* extern */
extern M2C_UNK data_020fd594;
extern M2C_UNK data_020fd59c;
extern M2C_UNK data_020fd5a4;
extern M2C_UNK data_020fd5b0;

void func_02034750(void *arg0) {
    s32 temp_r1;
    void **temp_r0;
    void **temp_r0_2;
    void **var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_020351a8(arg0, &data_020fd594, 4, 0, 5);
            func_020351a8(arg0, &data_020fd59c, 1, 0, 5);
            func_020dd898(1);
            M2C_FIELD(arg0, s32 *, 0x15C) = 0;
            var_r0                        = func_0200f270(0x4C);
            if (var_r0 != NULL) {
                var_r0 = func_020d5b34(var_r0, 0);
            }
            M2C_FIELD(arg0, void ***, 0x34) = var_r0;
            func_020d536c(M2C_FIELD(arg0, void ***, 0x34), 5);
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
            break;
        case 1:
            if (func_020d5358(M2C_FIELD(arg0, void ***, 0x34)) != 0) {
                func_020d5348(M2C_FIELD(arg0, void ***, 0x34));
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
            }
            break;
        case 2:
            if (func_020d5338(M2C_FIELD(arg0, void ***, 0x34)) != 0) {
                if (func_020d5330(M2C_FIELD(arg0, void ***, 0x34)) == 1) {
                    func_020351a8(arg0, &data_020fd5a4, 4, 0, 5);
                    func_020351a8(arg0, &data_020fd5b0, 1, 0, 5);
                    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1300;
                    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1100;
                }
                temp_r0 = M2C_FIELD(arg0, void ***, 0x34);
                if (temp_r0 != NULL) {
                    if (temp_r0 != NULL) {
                        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
                    }
                    M2C_FIELD(arg0, void ***, 0x34) = NULL;
                }
                M2C_FIELD(arg0, s32 *, 0x20) = 6;
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            break;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x34);
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0xC)(temp_r0_2);
}
