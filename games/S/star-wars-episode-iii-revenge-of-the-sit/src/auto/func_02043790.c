/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02043688();                                /* extern */
s32 func_020436bc();                                /* extern */
s32 func_02043808();                                /* extern */
extern s32 data_020ad3a8;

s32 func_02043790(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020ad3a8 == -1) {
        temp_r4 = func_020436bc();
        if (func_02043808() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_02043688() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020ad3a8 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020ad3a8;
}
