/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020051a4(s32, s32);                        /* extern */
s32 func_02006794(s32, s32);                        /* extern */
s32 func_02014cb4(M2C_UNK *);                       /* extern */
void *func_02014cd8(M2C_UNK *);                     /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_0215b3d4;

s32 func_020135bc(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = M2C_FIELD(func_02014cd8(&data_0215b3d4), s32 *, 0xC);
    switch (temp_r0) {                              /* irregular */
        case 0:
            var_r4 = func_0203a6cc(0x8C);
            if (var_r4 != 0) {
                var_r4 = func_02006794(var_r4, func_02014cb4(&data_0215b3d4));
            }
            break;
        case 1:
            var_r4 = func_0203a6cc(0x68);
            if (var_r4 != 0) {
                var_r4 = func_020051a4(var_r4, func_02014cb4(&data_0215b3d4));
            }
            break;
    }
    return var_r4;
}
