#include "m2c.h"

M2C_UNK func_02017c64(s32, void *);                 /* extern */
M2C_UNK func_02017d44(void *);                      /* extern */
M2C_UNK func_020181e8(void *);                      /* extern */
M2C_UNK func_020182a4();                            /* extern */
M2C_UNK func_02018468();                            /* extern */
M2C_UNK func_02018498();                            /* extern */
M2C_UNK func_020188b0(void *);                      /* extern */
M2C_UNK func_02019f88();                            /* extern */
extern M2C_UNK data_020940c4;

void func_0201813c(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_020940c4, void ***, 8);
    func_02018468();
    func_020188b0(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02017c64(temp_r0, temp_r4);
    }
    func_02017d44(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020181e8(temp_r4 + 0x9C);
    func_02018498();
    func_020182a4();
    func_02019f88();
}
