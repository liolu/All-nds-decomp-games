/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020635bc(u8, s32);                     /* extern */
M2C_UNK func_02063678(u8);                          /* extern */
M2C_UNK func_02073e0c(void *);                      /* extern */

void func_02073f18(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020635bc(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02063678(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02073e0c(arg0);
}
