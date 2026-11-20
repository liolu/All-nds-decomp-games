#include "m2c.h"

s32 func_02093a30();                                /* extern */
void *func_0207b9f4(M2C_UNK);                       /* extern */
s32 func_0207baac();                                /* extern */
s32 func_0207d954(void *);                          /* extern */
s32 func_0207d9b8(void *);                          /* extern */
s32 func_0207da48();                                /* extern */
s32 func_0207da74(void *);                          /* extern */
s32 func_0207dae0(void *);                          /* extern */
s32 func_0207daf4();                                /* extern */
M2C_UNK func_02082288();                            /* extern */
M2C_UNK func_02082380();                            /* extern */

s32 func_0207d858(void) {
    s32 var_r4;
    u32 temp_r0;
    void *temp_r5;

    var_r4  = func_0207baac();
    temp_r5 = func_0207b9f4(0x10);
    if (func_02093a30() == 9) {
        temp_r0 = var_r4 - 0xA;
        switch (temp_r0) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 0:                                     /* switch 1 */
                var_r4 = func_0207d954(temp_r5);
                break;
            case 2:                                     /* switch 1 */
                var_r4 = func_0207d9b8(temp_r5);
                break;
            case 3:                                     /* switch 1 */
                var_r4 = func_0207da48();
                break;
            case 4:                                     /* switch 1 */
                var_r4 = func_0207da74(temp_r5);
                break;
            case 5:                                     /* switch 1 */
                var_r4 = func_0207dae0(temp_r5);
                break;
            case 1:                                     /* switch 1 */
                var_r4 = func_0207daf4();
                break;
        }
    } else {
        switch (var_r4) {                           /* switch 2; irregular */
            case 15:                                    /* switch 2 */
                var_r4 = func_0207dae0(temp_r5);
                break;
            case 11:                                    /* switch 2 */
                var_r4 = func_0207daf4();
                break;
            case 14:                                    /* switch 2 */
                func_02082380();
                func_02082288();
            /* fallthrough */
            default:                                    /* switch 2 */
                var_r4                                                                    = 0xB;
                M2C_FIELD((temp_r5 + (M2C_FIELD(temp_r5, u8 *, 0xD13) * 4)), s8 *, 0x444) = 2;
                break;
        }
    }
    return var_r4;
}
