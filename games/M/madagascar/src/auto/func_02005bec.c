/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020012bc(s32);                             /* extern */
M2C_UNK func_02001b64(void *, s32, s32, s32);       /* extern */
M2C_UNK func_02005bb8(void *);                      /* extern */
s32 func_02005c5c();                                /* extern */
s32 func_0202c3d4(M2C_UNK);                         /* extern */

void func_02005bec(void *arg0, M2C_UNK arg1) {
    if (func_02005c5c() != 0) {
        func_02005bb8(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x2DC) = func_0202c3d4(arg1);
    func_02001b64(arg0 + 0x20, func_020012bc(M2C_FIELD(arg0, s32 *, 0x2DC)), M2C_FIELD(arg0, s32 *, 8),
                  M2C_FIELD(arg0, s32 *, 0x10) * 2);
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)  = 0;
}
