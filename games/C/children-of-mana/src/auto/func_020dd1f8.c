/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
void *func_0203d1b0();                              /* extern */
extern M2C_UNK data_0210d154;
extern M2C_UNK data_0210d17c;

s32 func_020dd1f8(s32 arg0) {
    s32 var_r1;
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {                                 /* switch 1; irregular */
        case 2:                                         /* switch 1 */
            var_r4 = 0x44;
            break;
        case 0:                                         /* switch 1 */
        case 1:                                         /* switch 1 */
            if (arg0 == 0) {
                var_r1 = M2C_FIELD(func_0203d1b0(), s32 *, 0x38);
            } else {
                var_r1 = M2C_FIELD(func_0203d1b0(), s32 *, 0x3C);
            }
            switch (var_r1) {                           /* switch 2; irregular */
                case 0x10:                                  /* switch 2 */
                    var_r4 = 0x43;
                    break;
                case 0x100010:                              /* switch 2 */
                    var_r4 = 0x42;
                    break;
                case 0x200010:                              /* switch 2 */
                    var_r4 = 0x41;
                    break;
                default:                                    /* switch 2 */
                    func_0200e8c8(&data_0210d154);
                    break;
            }
            break;
        default:                                        /* switch 1 */
            func_0200e8c8(&data_0210d17c);
            break;
    }
    return var_r4;
}
