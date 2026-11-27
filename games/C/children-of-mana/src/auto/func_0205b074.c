/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ae4c();                            /* extern */
M2C_UNK func_0205af98(void *);                      /* extern */
M2C_UNK func_0205b370(void *);                      /* extern */
M2C_UNK func_0205b9d8(void *);                      /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
extern void **data_0211b020;
extern M2C_UNK data_0211b03c;

void func_0205b074(void) {
    void *temp_r4;

    temp_r4 = *data_0211b020;
    func_0205b9d8(temp_r4);
    func_0205b370(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_0211b03c + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_0205af98(temp_r4 + 0x90);
    func_0205ae4c();
    func_0205c9c4();
}
