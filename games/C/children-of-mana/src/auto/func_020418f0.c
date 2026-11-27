/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202863c();       /* extern */
M2C_UNK func_020400d4();              /* extern */
M2C_UNK func_02040398();              /* extern */
M2C_UNK func_02040d60();                         /* extern */
M2C_UNK func_0209304c();                     /* extern */

void func_020418f0(void *arg0) {
    func_0209304c(0);
    func_02040d60(arg0 + 0xD4);
    if (func_0202863c(arg0 + 0x160, M2C_FIELD(arg0, s32 *, 0x160), M2C_FIELD(arg0, s16 *, 0x174), 0) == 0) {
        func_020400d4(arg0 + 0x160, arg0 + 0xD4);
    } else {
        func_02040398(arg0 + 0x160, arg0 + 0xD4);
    }
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 0x10);
}
