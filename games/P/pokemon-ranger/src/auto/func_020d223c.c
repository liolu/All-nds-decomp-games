/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c5d70(u16);                         /* extern */
M2C_UNK func_020c5ec4(u16);                         /* extern */
M2C_UNK func_020c6fe8(u8 *, u32);                   /* extern */
M2C_UNK func_020c8470(M2C_UNK);                     /* extern */
M2C_UNK func_020c860c(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_020c8684(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_020c87a8(u8 *, u8 *, u32);             /* extern */
M2C_UNK func_020c87d8(u8 *, u8 *, u32);             /* extern */
s32 func_020d254c();                                /* extern */
extern M2C_UNK data_020f9d60;

s32 func_020d223c(M2C_UNK arg0, u8 *arg1, u8 *arg2, u32 arg3, u32 arg4) {
    u32 var_r1;
    u8 *var_r5;
    u8 *var_r6;
    u8 temp_r0;

    var_r6 = arg1;
    var_r5 = arg2;
    if (func_020d254c() == 0) {
        return 0;
    }
    func_020c5ec4(M2C_FIELD(&data_020f9d60, u16 *, 2));
    if (!(arg4 & 1)) {
        func_020c8470(arg0);
        func_020c6fe8(var_r5, arg3);
    }
    switch (arg4) {                                 /* irregular */
        case 16:
            func_020c860c(arg0, var_r6, var_r5, arg3);
            break;
        case 32:
            func_020c8684(arg0, var_r6, var_r5, arg3);
            break;
        case 17:
            func_020c87a8(var_r6, var_r5, arg3);
            break;
        case 33:
            func_020c87d8(var_r6, var_r5, arg3);
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
    func_020c5d70(M2C_FIELD(&data_020f9d60, u16 *, 2));
    if (func_020d254c() != 0) {
        return 1;
    }
    return 0;
}
