/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020299e4(s32);                             /* extern */
s32 func_02029a2c();                                /* extern */
s32 func_02088168(s32);                             /* extern */
M2C_UNK func_020b2f34(void *, M2C_UNK);             /* extern */
s32 func_020ef9a8(s32);                             /* extern */
M2C_UNK func_020ef9d4(s32);                         /* extern */
M2C_UNK func_020efb0c();                            /* extern */

void func_020afa80(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD4) == 0) {
        return;
    }
    func_020efb0c();
    if (M2C_FIELD(arg0, s32 *, 0x234) != 0) {
        return;
    }
    if (func_02088168(M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xD8) * 4)), s32 *, 0x30)) != 0) {
        return;
    }
    if (func_020ef9a8(M2C_FIELD(arg0, s32 *, 0xD4)) != 0) {
        func_020ef9d4(M2C_FIELD(arg0, s32 *, 0xD4));
        M2C_FIELD(arg0, s8 *, 0x19D) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return;
    }
    if (func_02029a2c() == 0) {
        return;
    }
    if (func_020299e4(M2C_FIELD(arg0, s32 *, 0x20)) == 0) {
        return;
    }
    func_020ef9d4(M2C_FIELD(arg0, s32 *, 0xD4));
    M2C_FIELD(arg0, s8 *, 0x114) = 1;
    func_020b2f34(arg0, 0xF);
}
