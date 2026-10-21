#include "m2c.h"

M2C_UNK func_02026df4(void *);                      /* extern */
M2C_UNK func_02026f1c();                            /* extern */
M2C_UNK func_02026f40(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0216afd0;
extern M2C_UNK data_0216b660;

void func_02026eb8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02026f1c(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    func_02026f40(&data_0216b660, arg0);
    if (M2C_FIELD(&data_0216afd0, s32 *, 4) != 0) {
        func_02026f40(M2C_FIELD(&data_0216afd0, s32 *, 4) + 0x4E0, arg0);
    }
    func_02026df4(arg0);
}
