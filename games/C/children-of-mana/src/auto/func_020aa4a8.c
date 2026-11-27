/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_02106dc0;
extern M2C_UNK data_02106e08;

void func_020aa4a8(void) {
    void *temp_r0;

    func_0200e8c8(&data_02106e08, &data_02106dc0);
    temp_r0                          = func_020aac90();
    M2C_FIELD(temp_r0, s32 *, 0x420) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x424) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x426) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x428) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x42A) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x42C) = 0;
}
