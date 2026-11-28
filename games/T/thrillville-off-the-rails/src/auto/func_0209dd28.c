#include "m2c.h"

s32 func_020912c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0209deb0(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_0209dd28(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = func_020912c8(8, 0x20, 0, 0, 0);
    func_0209deb0(arg0, 7, 0xD6D8, 0, -1);
    func_0209deb0(arg0, 5, 0x7530, 1, 0);
    func_0209deb0(arg0, 3, 0x2710, 2, -1);
    func_0209deb0(arg0, 1, 0xEA60, 3, -1);
    func_0209deb0(arg0, 0xA, 0x2AF8, 4, -1);
    func_0209deb0(arg0, 1, 0x3908, 5, -1);
    func_0209deb0(arg0, 1, 0x55F0, 6, -1);
}
