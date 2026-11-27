/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020698a4();                            /* extern */
M2C_UNK func_020699cc(void *);                      /* extern */
M2C_UNK func_02069d88(void *);                      /* extern */
M2C_UNK func_0206a298(void *);                      /* extern */
M2C_UNK _ZN3IRQ7DisableEv();                            /* extern */
extern void **data_021846ac;
extern M2C_UNK data_021846c8;

void func_02069aa8(void) {
    void *temp_r4;

    _ZN3IRQ7DisableEv();
    temp_r4 = *data_021846ac;
    func_0206a298(temp_r4);
    func_02069d88(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_021846c8 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020699cc(temp_r4 + 0x90);
    func_020698a4();
}
