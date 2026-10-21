#include "m2c.h"

M2C_UNK func_0202c68c();                            /* extern */
M2C_UNK func_0202c9ac();                            /* extern */
M2C_UNK func_0202dd34();                            /* extern */
M2C_UNK func_0202de78();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_02033bc4(void) {
    func_0206c4b4(1, 0x404, 0x7F, 0x7F, 0, 0x100);
    M2C_FIELD(&data_02181a4c, s8 *, 0x268) = 0;
    func_0202c68c();
    func_0202c9ac();
    func_0202dd34();
    func_0202de78();
}
