/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206b990(u8, s32);                     /* extern */
M2C_UNK func_0206b9a8(u8);                          /* extern */
M2C_UNK func_02063a4c(void *);                      /* extern */

void func_02063b58(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0206b990(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0206b9a8(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02063a4c(arg0);
}
