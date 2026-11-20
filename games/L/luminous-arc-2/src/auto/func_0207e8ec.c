#include "m2c.h"

M2C_UNK func_020075b0(void *, M2C_UNK, s32);        /* extern */
s32 func_0207e5c8();                                /* extern */
void *func_02083ac0(M2C_UNK, s32);                  /* extern */
extern M2C_UNK data_02170264;

s32 func_0207e8ec(s32 arg0, s32 arg1) {
    void *temp_r0;

    M2C_FIELD(&data_02170264, void **, 4) = func_02083ac0(1, func_0207e5c8());
    temp_r0                               = func_02083ac0(1, 0x794);
    M2C_FIELD(&data_02170264, void **, 0) = temp_r0;
    func_020075b0(temp_r0, 0, 0x794);
    M2C_FIELD(M2C_FIELD(&data_02170264, void **, 0), s32 *, 0)     = arg0;
    M2C_FIELD(M2C_FIELD(&data_02170264, void **, 0), s32 *, 0x790) = arg1;
    M2C_FIELD(&data_02170264, s32 *, 8)                            = 0;
    return 1;
}
