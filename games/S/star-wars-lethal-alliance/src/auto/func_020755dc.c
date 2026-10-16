/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020685cc(u8, s32);                     /* extern */
M2C_UNK func_02068688(u8);                          /* extern */
M2C_UNK func_020754d0(void *);                      /* extern */

void func_020755dc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020685cc(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02068688(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020754d0(arg0);
}
