#include "m2c.h"

s32 func_020b5e18(M2C_UNK);                         /* extern */
s32 func_020b5efc(M2C_UNK);                         /* extern */
M2C_UNK func_020b5fa4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b5fb8(M2C_UNK, s32);                /* extern */
extern s32 data_020f1bcc;

void func_020b5c80(void) {
    if (data_020f1bcc != 0) {
        return;
    }
    data_020f1bcc = 1;
    func_020b5fa4(0, func_020b5e18(0));
    func_020b5fb8(0, func_020b5efc(0));
    func_020b5fb8(2, 0);
    func_020b5fa4(2, 0);
    func_020b5fa4(3, func_020b5e18(3));
    func_020b5fb8(3, func_020b5efc(3));
    func_020b5fa4(4, func_020b5e18(4));
    func_020b5fb8(4, func_020b5efc(4));
    func_020b5fa4(5, func_020b5e18(5));
    func_020b5fb8(5, func_020b5efc(5));
    func_020b5fa4(6, func_020b5e18(6));
    func_020b5fb8(6, func_020b5efc(6));
}
