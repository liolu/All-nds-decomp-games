#include "m2c.h"

M2C_UNK func_020b4bb0(s32, void *);                 /* extern */
M2C_UNK func_020b4c94(void *);                      /* extern */
M2C_UNK func_020b5230(void *);                      /* extern */
M2C_UNK func_020b52e8();                            /* extern */
M2C_UNK func_020b5560();                            /* extern */
M2C_UNK func_020b5594();                            /* extern */
M2C_UNK func_020b5a5c(void *);                      /* extern */
M2C_UNK func_020b6f24();                            /* extern */
extern M2C_UNK data_020f1950;

void func_020b50ac(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_020f1950, void ***, 8);
    func_020b5560();
    func_020b5a5c(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020b4bb0(temp_r0, temp_r4);
    }
    func_020b4c94(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020b5230(temp_r4 + 0x9C);
    func_020b5594();
    func_020b52e8();
    func_020b6f24();
}
