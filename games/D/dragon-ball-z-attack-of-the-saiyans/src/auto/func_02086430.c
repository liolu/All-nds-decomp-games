#include "m2c.h"

M2C_UNK func_02084818(M2C_UNK *);                   /* extern */
M2C_UNK func_02086490();                            /* extern */
M2C_UNK func_02086ba0();                            /* extern */
extern s32 data_020d8a24;
extern M2C_UNK data_020d8a28;

void func_02086430(void) {
    if (data_020d8a24 != 0) {
        return;
    }
    data_020d8a24 = 1;
    func_02084818(&data_020d8a28);
    func_02086490();
    func_02086ba0();
}
