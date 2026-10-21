#include "m2c.h"

M2C_UNK func_020376a8(M2C_UNK);                     /* extern */
M2C_UNK func_02041bd0();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020ca99c();                            /* extern */
M2C_UNK func_020cc610(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cf3f0();                            /* extern */

void func_02039fd8(void) {
    func_02041bd0();
    *(s32 *) 0x04000000 &= ~0xE000;
    func_020cf3f0();
    func_020cc610(1, 1, 1, 1, 1, 3);
    func_0206c4b4(3, 0, 0x7F, 0x7F, 0, 0);
    func_020ca99c();
    func_020cd4d8();
    func_020376a8(1);
    func_020cd508(2, 1, 0);
}
