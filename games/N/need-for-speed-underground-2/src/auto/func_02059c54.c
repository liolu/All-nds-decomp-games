/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02059a50();                            /* extern */
M2C_UNK func_02059b78(void *);                      /* extern */
M2C_UNK func_02059f34(void *);                      /* extern */
M2C_UNK func_0205a4f0(void *);                      /* extern */
M2C_UNK _ZN3IRQ7DisableEv();                            /* extern */
extern void **data_0217ad68;
extern M2C_UNK data_0217ad84;

void func_02059c54(void) {
    void *temp_r4;

    _ZN3IRQ7DisableEv();
    temp_r4 = *data_0217ad68;
    func_0205a4f0(temp_r4);
    func_02059f34(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_0217ad84 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_02059b78(temp_r4 + 0x90);
    func_02059a50();
}
