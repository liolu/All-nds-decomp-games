#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104(u16);                         /* extern */
extern M2C_UNK data_02185160;

void func_020d3468(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020d2084(9);
        func_020d2104(M2C_FIELD(arg0, u16 *, 2));
        return;
    }
    if (M2C_FIELD(&data_02185160, M2C_UNK(**)(), 8) != NULL) {
        M2C_FIELD(&data_02185160, M2C_UNK(**)(), 8)(arg0);
    }
    func_020d2084(1);
}
