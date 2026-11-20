#include "m2c.h"

M2C_UNK func_020be174(s32, void *);                 /* extern */
M2C_UNK func_020be22c(s32);                         /* extern */

void func_020be294(s32 arg0, void *arg1) {
    u8 *temp_r0;
    u8 temp_r0_2;

    if ((arg1 != NULL) && (temp_r0 = M2C_FIELD(arg1, u8 **, 8), (temp_r0 != NULL))) {
        temp_r0_2 = *temp_r0;
        switch (temp_r0_2) {                        /* irregular */
            case 0x4D:
                func_020be22c(arg0 + 0x3C);
                func_020be174(arg0 + 8, arg1);
                return;
            case 0x4A:
                func_020be22c(arg0 + 0x44);
                func_020be174(arg0 + 0x10, arg1);
                return;
            case 0x56:
                func_020be22c(arg0 + 0x4C);
                func_020be174(arg0 + 0x18, arg1);
                return;
        }
    }
}
