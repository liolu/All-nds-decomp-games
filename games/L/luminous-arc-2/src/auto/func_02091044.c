#include "m2c.h"

M2C_UNK func_020075b0(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02090a64();                            /* extern */
extern void *data_02170c7c;

void func_02091044(void *arg0) {
    data_02170c7c = arg0;
    func_020075b0(arg0, 0, 0x614);
    M2C_FIELD(data_02170c7c, s16 *, 0x610) = 0x5B9;
    func_02090a64();
}
