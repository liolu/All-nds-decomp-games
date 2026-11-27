/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02052d70(void *, s32);                     /* extern */
M2C_UNK func_02052eec(void *, s32);                 /* extern */
M2C_UNK func_02054050();                            /* extern */
s32 func_020540f4(s32);                             /* extern */

s32 func_02054008(void *arg0) {
    func_02052eec(arg0, func_02052d70(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020540f4(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02054050();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
