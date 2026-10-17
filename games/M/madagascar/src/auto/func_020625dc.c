/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020623d8();                            /* extern */
M2C_UNK func_02062500(void *);                      /* extern */
M2C_UNK func_020628bc(void *);                      /* extern */
M2C_UNK func_02062e78(void *);                      /* extern */
M2C_UNK func_02063cf8();                            /* extern */
extern void **data_020db7ac;
extern M2C_UNK data_020db7c8;

void func_020625dc(void) {
    void *temp_r4;

    func_02063cf8();
    temp_r4 = *data_020db7ac;
    func_02062e78(temp_r4);
    func_020628bc(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_020db7c8 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_02062500(temp_r4 + 0x90);
    func_020623d8();
}
