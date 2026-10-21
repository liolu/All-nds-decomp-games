#include "m2c.h"

M2C_UNK func_02086600(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_021704dc;
extern M2C_UNK func_0208654c;

void func_02086180(void) {
    func_02086600(&func_0208654c, 0);
    M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 4)    = 1;
    M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 0x30) = 0;
}
