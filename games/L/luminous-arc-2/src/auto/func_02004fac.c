#include "m2c.h"

M2C_UNK func_02004ab0(s32, void *);                 /* extern */
M2C_UNK func_02004b94(void *);                      /* extern */
M2C_UNK func_02005130(void *);                      /* extern */
M2C_UNK func_020051e8();                            /* extern */
M2C_UNK func_0200546c();                            /* extern */
M2C_UNK func_020054a0();                            /* extern */
M2C_UNK func_02005980(void *);                      /* extern */
M2C_UNK func_02006f34();                            /* extern */
extern M2C_UNK data_021478e0;

void func_02004fac(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_021478e0, void ***, 8);
    func_0200546c();
    func_02005980(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02004ab0(temp_r0, temp_r4);
    }
    func_02004b94(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02005130(temp_r4 + 0x9C);
    func_020054a0();
    func_020051e8();
    func_02006f34();
}
