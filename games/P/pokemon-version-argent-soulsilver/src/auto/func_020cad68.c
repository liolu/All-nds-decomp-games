#include "m2c.h"

M2C_UNK func_020caca4(void *);                      /* extern */
M2C_UNK func_020cadcc();                            /* extern */
M2C_UNK func_020cadf0(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_021e0970;
extern M2C_UNK data_021e1000;

void func_020cad68(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020cadcc(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    func_020cadf0(&data_021e1000, arg0);
    if (M2C_FIELD(&data_021e0970, s32 *, 4) != 0) {
        func_020cadf0(M2C_FIELD(&data_021e0970, s32 *, 4) + 0x4E0, arg0);
    }
    func_020caca4(arg0);
}
