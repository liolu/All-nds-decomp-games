#include "m2c.h"

M2C_UNK func_02020d38(M2C_UNK, s32, s32, s32);      /* extern */
M2C_UNK func_02022e48(s32, s32);                    /* extern */

void func_0206d890(void *arg0) {
    func_02022e48(M2C_FIELD(arg0, s32 *, 0x128), M2C_FIELD(arg0, s32 *, 0x130));
    func_02020d38(3, M2C_FIELD(arg0, s32 *, 0x128), M2C_FIELD(arg0, s32 *, 0x12C), M2C_FIELD(arg0, s32 *, 0x130));
}
