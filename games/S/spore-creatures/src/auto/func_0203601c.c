#include "m2c.h"

M2C_UNK func_02035f24(void *, M2C_UNK);             /* extern */
M2C_UNK func_020966e0(void *, s32);                 /* extern */
M2C_UNK func_ov003_02145e80(M2C_UNK *, M2C_UNK, void *); /* extern */
extern M2C_UNK data_027e0610;
extern M2C_UNK data_ov003_0214c21c;

void *func_0203601c(void *arg0, u32 arg1, M2C_UNK arg2) {
    s32 var_r2;

    func_02035f24(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    var_r2                       = 0xD;
    switch (arg1) {
        default:
            break;
        case 8:
            var_r2 = 0;
            break;
        case 9:
            var_r2 = 1;
            break;
        case 10:
            var_r2 = 2;
            break;
        case 11:
            var_r2 = 3;
            break;
        case 12:
            var_r2 = 4;
            break;
        case 13:
            var_r2 = 5;
            break;
        case 14:
            var_r2 = 6;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            var_r2 = 7;
            break;
        case 1:
            var_r2 = 8;
            break;
        case 15:
            var_r2 = 9;
            break;
        case 16:
            var_r2 = 0xB;
            break;
        case 17:
            var_r2 = 0xC;
            break;
    }
    func_020966e0(arg0, (var_r2 * 0xC) + (s32) &data_ov003_0214c21c);
    func_ov003_02145e80(&data_027e0610, arg2, arg0 + 0x70);
    return arg0;
}
