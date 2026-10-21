#include "m2c.h"

M2C_UNK func_02036b6c(s32, void *);                 /* extern */
M2C_UNK func_02036c50(void *);                      /* extern */
M2C_UNK func_02037108(void *);                      /* extern */
M2C_UNK func_020371c0();                            /* extern */
M2C_UNK func_020372bc();                            /* extern */
M2C_UNK func_020372f0();                            /* extern */
M2C_UNK func_020375e4(void *);                      /* extern */
M2C_UNK func_02039148();                            /* extern */
extern M2C_UNK data_0215dabc;

void func_0203705c(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0215dabc, void ***, 8);
    func_020372bc();
    func_020375e4(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02036b6c(temp_r0, temp_r4);
    }
    func_02036c50(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02037108(temp_r4 + 0x9C);
    func_020372f0();
    func_020371c0();
    func_02039148();
}
