#include "m2c.h"

M2C_UNK func_02054158(s32);                         /* extern */
s32 func_020547d4(s32);                             /* extern */
M2C_UNK func_02060cd8(s32);                         /* extern */
s32 func_02060ebc(s32);                             /* extern */
M2C_UNK func_02061b24(s32);                         /* extern */
M2C_UNK func_020645a8(s32);                         /* extern */
M2C_UNK func_020645b8(s32);                         /* extern */
M2C_UNK func_02069ea4(void *);                      /* extern */

void func_02069f04(void *arg0) {
    if (func_020547d4(M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
        func_02054158(M2C_FIELD(arg0, s32 *, 0x14));
    } else if (func_02060ebc(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        func_02060cd8(M2C_FIELD(arg0, s32 *, 0x20));
    }
    func_020645a8(M2C_FIELD(arg0, s32 *, 0x24));
    func_020645b8(M2C_FIELD(arg0, s32 *, 0x24));
    func_02069ea4(arg0);
    func_02061b24(M2C_FIELD(arg0, s32 *, 0x28));
}
