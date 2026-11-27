#include "m2c.h"

M2C_UNK func_020934bc(s32);                         /* extern */
M2C_UNK func_020cfbbc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0206380c;

void *func_02063810(void *arg0) {
    func_020934bc(M2C_FIELD(arg0, s32 *, 0x478));
    M2C_FIELD(arg0, s32 *, 0x478) = 0;
    func_020cfbbc(M2C_FIELD(arg0, s32 *, 0x474), 0x74, 8, &func_0206380c);
    M2C_FIELD(arg0, s32 *, 0x474) = 0;
    return arg0;
}
