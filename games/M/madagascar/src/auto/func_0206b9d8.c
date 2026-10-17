/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063010(void *, M2C_UNK);             /* extern */
s32 func_0206b124(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
void *func_0206b244();                              /* extern */

s32 func_0206b9d8(void) {
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_0206b244();
    if (func_0206b124(2, 7, 8) != 0) {
        return 0;
    }
    func_02063010(M2C_FIELD(temp_r4, void **, 4) + 0x10, 4);
    temp_r2 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r2, s32 *, 0x10) == 1) {
        return 0;
    }
    func_02063010(temp_r2 + 0x18E, 4);
    return (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x18E) + 0x1F) & ~0x1F;
}
