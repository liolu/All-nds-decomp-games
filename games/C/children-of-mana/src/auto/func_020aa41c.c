/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020aa45c();                            /* extern */
M2C_UNK func_020aa4a8();                            /* extern */
M2C_UNK func_020aa4f4();                            /* extern */
M2C_UNK func_020aac60();                            /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_02106d98;
extern M2C_UNK data_02106df0;

void func_020aa41c(void) {
    void *temp_r4;

    func_0200e8c8(&data_02106df0, &data_02106d98);
    func_020aa4f4();
    temp_r4 = func_020aac90();
    func_020aac60();
    M2C_FIELD(temp_r4, s32 *, 0x41C) = 0;
    func_020aa4a8();
    func_020aa45c();
}
