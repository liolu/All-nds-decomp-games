/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065400();                            /* extern */
M2C_UNK func_02065438();                            /* extern */
M2C_UNK func_0206556c();                            /* extern */
M2C_UNK func_020656b8(void *);                      /* extern */
M2C_UNK func_02065b30(void *);                      /* extern */
M2C_UNK func_02065c10(s32, void *);                 /* extern */
M2C_UNK func_02066138(void *);                      /* extern */
M2C_UNK func_0206768c();                            /* extern */
extern void **data_020e6324;

void func_0206578c(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_020e6324;
    func_02065438();
    func_02066138(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_02065c10(temp_r0, temp_r4);
    }
    func_02065b30(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020656b8(temp_r4 + 0x9C);
    func_02065400();
    func_0206556c();
    func_0206768c();
}
