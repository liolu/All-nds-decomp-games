#include "m2c.h"

M2C_UNK func_0202c284(s32, M2C_UNK);                /* extern */
M2C_UNK func_0202c30c();                            /* extern */
M2C_UNK func_0202c378(void *);                      /* extern */
M2C_UNK func_0202c750(s32, s32, s32);               /* extern */
M2C_UNK func_0202ca28(s32, s32, s32);               /* extern */

void func_020b0220(s32 arg0, void *arg1, M2C_UNK arg2) {
    func_0202c284(arg0 + 4, arg2);
    func_0202c750(M2C_FIELD(arg1, s16 *, 8) << 0xC, M2C_FIELD(arg1, s16 *, 0xA) << 0xC, M2C_FIELD(arg1, s16 *, 0xC) << 0xC);
    func_0202ca28(arg0 + 4, M2C_FIELD(arg1, s32 *, 0x10), M2C_FIELD(arg1, s32 *, 0x14));
    func_0202c378(arg1 + 0x18);
    func_0202c30c();
}
