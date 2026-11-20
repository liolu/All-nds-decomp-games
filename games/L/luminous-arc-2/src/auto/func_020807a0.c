#include "m2c.h"

M2C_UNK func_020058a0(s32);                         /* extern */
M2C_UNK func_02005924(void *);                      /* extern */
extern M2C_UNK data_02170270;

void func_020807a0(s32 arg0) {
    func_020058a0(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1004) = arg0;
    func_02005924(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
}
