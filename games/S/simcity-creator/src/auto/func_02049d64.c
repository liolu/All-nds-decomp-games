#include "m2c.h"

s32 func_02002518();                                /* extern */
s32 func_0200254c();                                /* extern */
s32 func_020027b0();                                /* extern */
s32 func_020027e4();                                /* extern */
M2C_UNK func_020b3dcc(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020b3e44(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020b3e84(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b442c(s32);                         /* extern */

void func_02049d64(void *arg0) {
    func_020b3dcc(M2C_FIELD(arg0, s32 *, 0xB50), func_020027e4(), 0x20, 0x18, 4);
    func_020b3e44(M2C_FIELD(arg0, s32 *, 0xB50), func_0200254c(), 0, 0, 0x20, 0x18, 0xF, 0, 0x20);
    func_020b3e84(M2C_FIELD(arg0, s32 *, 0xB50), 0, 3);
    func_020b3dcc(M2C_FIELD(arg0, s32 *, 0xB4C), func_020027b0(), 0x20, 0x18, 4);
    func_020b3e44(M2C_FIELD(arg0, s32 *, 0xB4C), func_02002518(), 0, 0, 0x20, 0x18, 0xF, 0, 0x20);
    func_020b3e84(M2C_FIELD(arg0, s32 *, 0xB4C), 0, 3);
    func_020b442c(M2C_FIELD(arg0, s32 *, 0xB4C));
    func_020b442c(M2C_FIELD(arg0, s32 *, 0xB50));
}
