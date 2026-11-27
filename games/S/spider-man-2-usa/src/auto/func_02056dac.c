/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02056ba8();                            /* extern */
M2C_UNK func_02056cd0(void *);                      /* extern */
M2C_UNK func_02057084(void *);                      /* extern */
M2C_UNK func_02057408(void *);                      /* extern */
M2C_UNK _ZN3IRQ7DisableEv();                            /* extern */
extern void **data_021612dc;
extern M2C_UNK data_021612f8;

void func_02056dac(void) {
    void *temp_r4;

    _ZN3IRQ7DisableEv();
    temp_r4 = *data_021612dc;
    func_02057408(temp_r4);
    func_02057084(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_021612f8 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_02056cd0(temp_r4 + 0x90);
    func_02056ba8();
}
