/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204c744(void *);                      /* extern */
M2C_UNK func_0204cd38();                            /* extern */
s32 func_02055e74(s32, s32);                        /* extern */

void func_0204ccdc(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1D0);
    if (temp_r1 <= 0) {
        func_0204cd38();
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x1E0) +
               func_02055e74(M2C_FIELD(arg0, s32 *, 0x1E4) - M2C_FIELD(arg0, s32 *, 0x1E0), temp_r1 << 0xC));
    func_0204c744(arg0);
    M2C_FIELD(arg0, s32 *, 0x1D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D0) - 1);
}
