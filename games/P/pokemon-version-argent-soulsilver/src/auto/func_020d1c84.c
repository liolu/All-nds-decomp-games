#include "m2c.h"

M2C_UNK func_020d1784(s32, void *);                 /* extern */
M2C_UNK func_020d1868(void *);                      /* extern */
M2C_UNK func_020d1ecc(void *);                      /* extern */
M2C_UNK func_020d1f84();                            /* extern */
M2C_UNK func_020d21fc();                            /* extern */
M2C_UNK func_020d2230();                            /* extern */
M2C_UNK func_020d26f8(void *);                      /* extern */
M2C_UNK func_020d3f48();                            /* extern */
extern M2C_UNK data_021e169c;

void func_020d1c84(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_021e169c, void ***, 8);
    func_020d21fc();
    func_020d26f8(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020d1784(temp_r0, temp_r4);
    }
    func_020d1868(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020d1ecc(temp_r4 + 0x9C);
    func_020d2230();
    func_020d1f84();
    func_020d3f48();
}
