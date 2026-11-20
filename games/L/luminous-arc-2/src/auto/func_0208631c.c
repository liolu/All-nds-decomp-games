#include "m2c.h"

M2C_UNK func_0207fba8();                            /* extern */
M2C_UNK func_0207fc34();                            /* extern */
M2C_UNK func_02083b04(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_021704dc;

void func_0208631c(void) {
    if (M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 0x24) != 0) {
        func_0207fba8();
        func_0207fc34();
        func_02083b04(0, M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 0x24), 0);
        M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 0x24) = 0;
    }
    M2C_FIELD(&data_021704dc, void **, 4) = NULL;
}
