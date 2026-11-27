/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020baf8c(void *, s32, s32);            /* extern */
M2C_UNK func_020bafe4(void *, u16, u16, s32, s32, s32); /* extern */
M2C_UNK func_020bb0e0(void *, s32);                 /* extern */
M2C_UNK func_020bb0f4(void *, s32);                 /* extern */
M2C_UNK func_020bb108(void *, s32, s32);            /* extern */
M2C_UNK func_020bb14c(void *, u16, u16, u16, s32, s32, s32, s32); /* extern */

void func_020bae64(void *arg0, void *arg1) {
    func_020bb14c(arg0, M2C_FIELD(arg1, u16 *, 0), M2C_FIELD(arg1, u16 *, 2), M2C_FIELD(arg1, u16 *, 4),
                  M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 0xC), (s32) M2C_FIELD(arg1, s16 *, 0x10),
                  (s32) M2C_FIELD(arg1, s16 *, 0x12));
    func_020bb108(arg0, M2C_FIELD(arg1, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x18));
    func_020bb0f4(arg0, M2C_FIELD(arg1, s32 *, 0x1C));
    func_020bb0e0(arg0, M2C_FIELD(arg1, s32 *, 0x20));
    func_020bafe4(arg0, M2C_FIELD(arg1, u16 *, 0x24), M2C_FIELD(arg1, u16 *, 0x26), M2C_FIELD(arg1, s32 *, 0x28),
                  M2C_FIELD(arg1, s32 *, 0x2C), M2C_FIELD(arg1, s32 *, 0x30));
    func_020baf8c(arg0, M2C_FIELD(arg1, s32 *, 0x34), M2C_FIELD(arg1, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x13C) = (s32) (M2C_FIELD(arg0, s32 *, 0x13C) | M2C_FIELD(arg1, s32 *, 0x3C));
}
