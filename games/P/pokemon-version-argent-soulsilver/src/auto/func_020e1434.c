#include "m2c.h"

M2C_UNK func_020d14ac(u16);                         /* extern */
M2C_UNK func_020d14ec(u16);                         /* extern */
M2C_UNK func_020d2894(u8 *, u32);                   /* extern */
M2C_UNK func_020d3ff4(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_020d4064(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_020d4294(M2C_UNK);                     /* extern */
M2C_UNK func_020d47b8(u8 *, u8 *, u32);             /* extern */
M2C_UNK func_020d4808(u8 *, u8 *, u32);             /* extern */
s32 func_020e1134();                                /* extern */
M2C_UNK func_020e16c0();                            /* extern */
extern M2C_UNK data_021e4d60;

s32 func_020e1434(M2C_UNK arg0, u8 *arg1, u8 *arg2, u32 arg3, u32 arg4) {
    u32 var_r1;
    u8 *var_r5;
    u8 *var_r6;
    u8 temp_r0;

    var_r6 = arg1;
    var_r5 = arg2;
    if (func_020e1134() == 0) {
        return 0;
    }
    func_020e16c0();
    func_020d14ac(M2C_FIELD(&data_021e4d60, u16 *, 6));
    if (!(arg4 & 1)) {
        func_020d4294(arg0);
        func_020d2894(var_r5, arg3);
    }
    switch (arg4) {                                 /* irregular */
        case 16:
            func_020d4064(arg0, var_r6, var_r5, arg3);
            break;
        case 32:
            func_020d3ff4(arg0, var_r6, var_r5, arg3);
            break;
        case 17:
            func_020d47b8(var_r6, var_r5, arg3);
            break;
        case 33:
            func_020d4808(var_r6, var_r5, arg3);
            break;
        case 1:
            for (var_r1 = 0; var_r1 < arg3; var_r1 += 1) {
                temp_r0 = *var_r6;
                var_r6 += 1;
                *var_r5 = temp_r0;
                var_r5 += 1;
            }
            break;
    }
    func_020d14ec(M2C_FIELD(&data_021e4d60, u16 *, 6));
    if (func_020e1134() != 0) {
        return 1;
    }
    return 0;
}
