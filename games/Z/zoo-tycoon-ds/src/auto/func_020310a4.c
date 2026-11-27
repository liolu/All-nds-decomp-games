/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02036484(void *);                          /* extern */
s32 func_02036d68(void *);                          /* extern */
M2C_UNK func_02037398();                            /* extern */
M2C_UNK func_02054840(void *);                      /* extern */

void func_020310a4(void *arg0) {
    func_02037398();
    if (func_02036484(arg0) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x192) == 0) {
        M2C_FIELD(arg0, s16 *, 0x28) = 0;
        *(s16 *) 0x04001050          = 0xBF;
        *(s16 *) 0x04001054          = 0;
    }
    if (func_02036d68(arg0) != 0) {
        return;
    }
    func_02054840(arg0);
}
