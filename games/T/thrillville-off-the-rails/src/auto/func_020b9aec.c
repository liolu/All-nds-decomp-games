#include "m2c.h"

M2C_UNK func_020b9514(void *);                      /* extern */
s32 func_020b9c4c(void *);                          /* extern */
u32 func_020bbef0(s32);                             /* extern */
extern void **data_020ef778;
extern s32 data_02101b6c;

s32 func_020b9aec(void *arg0, s8 *arg1, u32 arg2) {
    s32 var_r0;
    s8 temp_r1;

    temp_r1 = *arg1;
    switch (temp_r1) {                              /* irregular */
        case 17:
            if (M2C_FIELD(*data_020ef778, s32(**)(), 0x3C)(data_020ef778) == 0) {
                return 0;
            }
            if (arg2 > 4U) {
                return 0;
            }
            if (arg2 == 0) {
                return 0;
            }
            if (arg2 > func_020bbef0(data_02101b6c)) {
                return 0;
            }
            M2C_FIELD((arg0 + arg2), s8 *, 0xC) = 1;
            if (func_020b9c4c(arg0) != 0) {
                return 1;
            }
            func_020b9514(arg0);
            return 0;
        case 18:
            if (M2C_FIELD(*data_020ef778, s32(**)(), 0x40)(data_020ef778) == 0) {
                return 0;
            }
            if (arg2 != 0) {
                var_r0 = 0;
            } else {
                var_r0                      = 1;
                M2C_FIELD(arg0, s8 *, 0x10) = 1;
            }
            return var_r0;
        default:
            return 0;
    }
}
