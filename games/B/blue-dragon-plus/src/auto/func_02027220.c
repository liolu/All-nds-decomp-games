#include "m2c.h"

M2C_UNK func_02027100(s32, void *);                 /* extern */
M2C_UNK func_020271b8(s32);                         /* extern */

void func_02027220(s32 arg0, void *arg1) {
    u8 *temp_r0;
    u8 temp_r0_2;

    if ((arg1 != NULL) && (temp_r0 = M2C_FIELD(arg1, u8 **, 8), (temp_r0 != NULL))) {
        temp_r0_2 = *temp_r0;
        switch (temp_r0_2) {                        /* irregular */
            case 0x4D:
                func_020271b8(arg0 + 0x3C);
                func_02027100(arg0 + 8, arg1);
                return;
            case 0x4A:
                func_020271b8(arg0 + 0x4C);
                func_02027100(arg0 + 0x10, arg1);
                return;
            case 0x56:
                func_020271b8(arg0 + 0x5C);
                func_02027100(arg0 + 0x18, arg1);
                return;
        }
    }
}
