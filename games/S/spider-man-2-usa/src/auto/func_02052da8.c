/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02052760(void *, s32);                     /* extern */
M2C_UNK func_02052904(void *, s32);                 /* extern */
M2C_UNK func_02052df0();                            /* extern */
s32 func_02052e90(s32);                             /* extern */

s32 func_02052da8(void *arg0) {
    func_02052904(arg0, func_02052760(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02052e90(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02052df0();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
