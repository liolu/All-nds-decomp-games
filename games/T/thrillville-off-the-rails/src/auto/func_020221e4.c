/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02021e00();                            /* extern */
M2C_UNK func_02021e38();                            /* extern */
M2C_UNK func_02022040();                            /* extern */
M2C_UNK func_020220c0(void *);                      /* extern */
M2C_UNK func_02022674(void *);                      /* extern */
M2C_UNK func_02022754(s32, void *);                 /* extern */
M2C_UNK func_02022c7c(void *);                      /* extern */
M2C_UNK func_020248dc();                            /* extern */
extern void **data_020ec378;

void func_020221e4(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_020ec378;
    func_02021e38();
    func_02022c7c(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02022754(temp_r0, temp_r4);
    }
    func_02022674(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020220c0(temp_r4 + 0x9C);
    func_02021e00();
    func_02022040();
    func_020248dc();
}
