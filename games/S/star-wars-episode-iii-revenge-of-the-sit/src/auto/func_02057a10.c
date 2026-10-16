/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045b00(u8, s32);                     /* extern */
M2C_UNK func_02045b5c(u8);                          /* extern */
M2C_UNK func_02057904(void *);                      /* extern */

void func_02057a10(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02045b00(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02045b5c(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02057904(arg0);
}
