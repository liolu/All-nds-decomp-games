#include "m2c.h"

M2C_UNK func_0200509c(void *);                      /* extern */
M2C_UNK func_0207fba8();                            /* extern */
M2C_UNK func_02081078();                            /* extern */
extern M2C_UNK data_02170294;

void func_02082380(void) {
    if (M2C_FIELD(&data_02170294, void **, 0) == NULL) {
        return;
    }
    if (M2C_FIELD(&data_02170294, s32 *, 0x14) != 0) {
        func_02081078();
    }
    func_0207fba8();
    if (M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), s32 *, 0x1188) != 0) {
        func_0200509c(M2C_FIELD(&data_02170294, void **, 0) + 0x111C);
    }
    M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), s32 *, 0x1004) = -7;
}
