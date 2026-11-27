/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_0200f270(M2C_UNK, M2C_UNK);             /* extern */
s32 func_020ed69c(void **);                         /* extern */
s32 func_020ed6c0(void **);                         /* extern */
s32 func_020ed6c8(void **);                         /* extern */
M2C_UNK func_020ed72c();                            /* extern */
M2C_UNK func_020ed9c0(void **, M2C_UNK);            /* extern */
void **func_020edd1c();                             /* extern */

void func_020ebf60(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    void **temp_r0_4;
    void **var_r0;

    if (M2C_FIELD(arg0, void ***, 0x60) != NULL) {
        func_020ed72c();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            var_r0 = func_0200f270(0x28, 0);
            if (var_r0 != NULL) {
                var_r0 = func_020edd1c();
            }
            M2C_FIELD(arg0, void ***, 0x60) = var_r0;
            func_020ed9c0(M2C_FIELD(arg0, void ***, 0x60), 1);
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
            return;
        case 1:                                         /* switch 1 */
            temp_r0_2 = func_020ed69c(M2C_FIELD(arg0, void ***, 0x60));
            switch (temp_r0_2) {                        /* switch 2; irregular */
                case 1:                                     /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x74) = 0xD;
                    break;
                case -1:                                    /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x74) = -1;
                    break;
                case 0:                                     /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x74) = 0x80;
                    break;
            }
            if (func_020ed6c0(M2C_FIELD(arg0, void ***, 0x60)) == -1) {
                return;
            }
            temp_r0_3 = func_020ed6c0(M2C_FIELD(arg0, void ***, 0x60));
            switch (temp_r0_3) {                        /* switch 3; irregular */
                case 1:                                     /* switch 3 */
                    M2C_FIELD(arg0, s32 *, 0x24) = 1;
                    break;
                case 0:                                     /* switch 3 */
                    if (M2C_FIELD(arg0, u8 *, 0x7D) != 0) {
                        M2C_FIELD(arg0, s32 *, 0x24) = 9;
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x24) = 8;
                    }
                    M2C_FIELD(arg0, s32 *, 0x3C) = 2;
                    break;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 2;
            return;
        case 2:                                         /* switch 1 */
            if (func_020ed6c8(M2C_FIELD(arg0, void ***, 0x60)) == 0) {
                return;
            }
            temp_r0_4 = M2C_FIELD(arg0, void ***, 0x60);
            if (temp_r0_4 != NULL) {
                if (temp_r0_4 != NULL) {
                    M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
                }
                M2C_FIELD(arg0, void ***, 0x60) = NULL;
            }
            if (M2C_FIELD(arg0, s32 *, 0x30) == 0xB) {
                M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            } else {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            return;
    }
}
