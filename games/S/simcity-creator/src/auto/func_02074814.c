#include "m2c.h"

s32 func_020463c4();                                /* extern */
M2C_UNK func_020537ec();                            /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
M2C_UNK func_020747a8(void *);                      /* extern */
M2C_UNK func_020748a8(void *);                      /* extern */
M2C_UNK func_020748b8(void *);                      /* extern */
M2C_UNK func_020748cc(void *);                      /* extern */
M2C_UNK func_020748d8(void *);                      /* extern */

s32 func_02074814(void *arg0, u32 arg1) {
    s32 temp_r0;

    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x38));
    func_020537ec();
    temp_r0 = func_020463c4();
    if (M2C_FIELD(arg0, s32 *, 0x3C) != temp_r0) {
        func_020747a8(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0;
    }
    switch (arg1) {
        default:
            break;
        case 3:
            func_020748a8(arg0);
            break;
        case 4:
            func_020748b8(arg0);
            break;
        case 5:
            func_020748cc(arg0);
            break;
        case 6:
            func_020748d8(arg0);
            break;
    }
    return 1;
}
