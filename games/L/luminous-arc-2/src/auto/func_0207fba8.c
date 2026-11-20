#include "m2c.h"

M2C_UNK func_0200509c(void *);                      /* extern */
M2C_UNK func_020058a0(s32);                         /* extern */
M2C_UNK func_02005924(void *);                      /* extern */
M2C_UNK func_02081078();                            /* extern */
extern M2C_UNK data_02170270;

void func_0207fba8(void) {
    if (M2C_FIELD(&data_02170270, void **, 8) == NULL) {
        return;
    }
    func_020058a0(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x13F0) = 1;
    func_02005924(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
    if (M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1314) != 0) {
        func_02081078();
    }
    if (M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1384) == 0) {
        return;
    }
    func_0200509c(M2C_FIELD(&data_02170270, void **, 8) + 0x1318);
}
