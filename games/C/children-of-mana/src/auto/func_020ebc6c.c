/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200f270(M2C_UNK, M2C_UNK);             /* extern */
s32 func_020ed6c0(void **);                         /* extern */
s32 func_020ed6c8(void **);                         /* extern */
M2C_UNK func_020ed72c();                            /* extern */
M2C_UNK func_020ed9c0(void **, M2C_UNK);            /* extern */
void **func_020edd1c();                             /* extern */

void func_020ebc6c(void *arg0) {
    s32 temp_r0;
    void **temp_r0_2;
    void **var_r0;

    if (M2C_FIELD(arg0, void ***, 0x60) != NULL) {
        func_020ed72c();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {                              /* irregular */
        case 0:
            var_r0 = func_0200f270(0x28, 0);
            if (var_r0 != NULL) {
                var_r0 = func_020edd1c();
            }
            M2C_FIELD(arg0, void ***, 0x60) = var_r0;
            func_020ed9c0(M2C_FIELD(arg0, void ***, 0x60), 0);
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
            return;
        case 1:
            if (func_020ed6c0(M2C_FIELD(arg0, void ***, 0x60)) != -1) {
                M2C_FIELD(arg0, s32 *, 0x28) = 2;
            }
            return;
        case 2:
            if (func_020ed6c8(M2C_FIELD(arg0, void ***, 0x60)) == 0) {
                return;
            }
            temp_r0_2 = M2C_FIELD(arg0, void ***, 0x60);
            if (temp_r0_2 != NULL) {
                if (temp_r0_2 != NULL) {
                    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
                }
                M2C_FIELD(arg0, void ***, 0x60) = NULL;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            return;
    }
}
