/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6258();                            /* extern */
M2C_UNK func_020c63a4(void *);                      /* extern */
M2C_UNK func_020c677c(void *);                      /* extern */
M2C_UNK func_020c6de4(void *);                      /* extern */
M2C_UNK func_020c80ec();                            /* extern */
extern void **data_020f6994;
extern M2C_UNK data_020f69b0;

void func_020c6480(void) {
    void *temp_r4;

    temp_r4 = *data_020f6994;
    func_020c6de4(temp_r4);
    func_020c677c(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_020f69b0 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020c63a4(temp_r4 + 0x90);
    func_020c6258();
    func_020c80ec();
}
