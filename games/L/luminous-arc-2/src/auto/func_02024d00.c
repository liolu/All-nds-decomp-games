#include "m2c.h"

M2C_UNK func_02001670(M2C_UNK);                     /* extern */
M2C_UNK func_020016a4(M2C_UNK, u16);                /* extern */
M2C_UNK func_02004334(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02004504(M2C_UNK);                     /* extern */
extern M2C_UNK func_020241d0;
extern M2C_UNK func_02024348;

void func_02024d00(void) {
    u16 temp_r1;

    func_02004334(1, &func_020241d0);
    func_02004334(2, &func_02024348);
    func_02004504(3);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020016a4(1, temp_r1);
    func_02001670(1);
}
