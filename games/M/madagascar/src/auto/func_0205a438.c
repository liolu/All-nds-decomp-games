/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065090(u8, s32);                     /* extern */
M2C_UNK func_020650c0(u8);                          /* extern */
M2C_UNK func_0205a32c(void *);                      /* extern */

void func_0205a438(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02065090(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_020650c0(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0205a32c(arg0);
}
