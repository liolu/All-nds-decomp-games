/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204877c();                            /* extern */
M2C_UNK func_020488a4(void *);                      /* extern */
M2C_UNK func_02048c60(void *);                      /* extern */
M2C_UNK func_020492d4(void *);                      /* extern */
M2C_UNK _ZN3IRQ7DisableEv();                            /* extern */
extern void **data_0206b9d4;
extern M2C_UNK data_0206b9f0;

void func_02048980(void) {
    void *temp_r4;

    _ZN3IRQ7DisableEv();
    temp_r4 = *data_0206b9d4;
    func_020492d4(temp_r4);
    func_02048c60(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_0206b9f0 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020488a4(temp_r4 + 0x90);
    func_0204877c();
}
