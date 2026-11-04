/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02054ef4(void *);                      /* extern */
M2C_UNK func_0205bfb4(u8);                          /* extern */
M2C_UNK func_0205bf9c(u8, s32);                     /* extern */

void func_02055000(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0205bf9c(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0205bfb4(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02054ef4(arg0);
}
