/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0203d1b0();                              /* extern */

s32 func_0208f420(s32 arg0, s32 arg1) {
    M2C_UNK saved_reg_r4;
    s32 var_r1;
    s32 var_r4;

    var_r4 = saved_reg_r4;
    var_r1 = arg1;
    switch (arg0) {                                 /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            var_r1 = M2C_FIELD(func_0203d1b0(), s32 *, 0x38);
            break;
        case 1:                                         /* switch 1 */
            var_r1 = M2C_FIELD(func_0203d1b0(), s32 *, 0x3C);
            break;
    }
    switch (var_r1) {                               /* switch 2; irregular */
        case 0x10:                                      /* switch 2 */
            var_r4 = 0x20;
            break;
        case 0x200010:                                  /* switch 2 */
            var_r4 = 0x80;
            break;
        case 0x300010:                                  /* switch 2 */
            var_r4 = 0x100;
            break;
        case 0x100010:                                  /* switch 2 */
            var_r4 = 0x40;
            break;
    }
    return var_r4;
}
