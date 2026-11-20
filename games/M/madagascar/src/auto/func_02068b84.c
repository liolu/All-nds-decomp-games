/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02068bc0(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_02069134();                            /* extern */
extern M2C_UNK func_0206912c;

s32 func_02068b84(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02068bc0(&func_0206912c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02069134();
    return sp0;
}
