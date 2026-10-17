/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001af8(void *);                      /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */

void func_02005bb8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x2DC));
    }
    M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
    func_02001af8(arg0 + 0x20);
}
