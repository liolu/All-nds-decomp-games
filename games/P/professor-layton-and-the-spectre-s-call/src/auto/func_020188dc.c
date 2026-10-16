#include "m2c.h"

M2C_UNK func_02015a38(M2C_UNK *);                   /* extern */
M2C_UNK func_0201893c();                            /* extern */
M2C_UNK func_0201901c();                            /* extern */
extern s32 data_02034e08;
extern M2C_UNK data_02034e0c;

void func_020188dc(void) {
    if (data_02034e08 != 0) {
        return;
    }
    data_02034e08 = 1;
    func_02015a38(&data_02034e0c);
    func_0201893c();
    func_0201901c();
}
