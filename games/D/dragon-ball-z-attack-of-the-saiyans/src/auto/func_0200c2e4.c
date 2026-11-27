#include "m2c.h"

M2C_UNK func_0200c780();                            /* extern */
M2C_UNK func_0200d140();                            /* extern */
M2C_UNK func_0200e0fc();                            /* extern */
M2C_UNK func_0200e380();                            /* extern */
M2C_UNK func_0200f404();                            /* extern */
M2C_UNK func_020672ec();                            /* extern */
extern M2C_UNK data_020af1e4;

void func_0200c2e4(void) {
    func_0200c780();
    func_0200d140();
    func_0200e0fc();
    func_0200e380();
    func_0200f404();
    func_020672ec();
    M2C_FIELD(&data_020af1e4, s32 *, 4) = -1;
    M2C_FIELD(&data_020af1e4, s8 *, 0)  = 0;
}
