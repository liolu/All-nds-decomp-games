#include "m2c.h"

M2C_UNK func_0202bbcc(void *, M2C_UNK, s32, u16);   /* extern */

void func_0202bbb0(void *arg0, M2C_UNK arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 8);
    func_0202bbcc(arg0, arg1, M2C_FIELD(temp_r2, s32 *, 0), M2C_FIELD(temp_r2, u16 *, 4));
}
