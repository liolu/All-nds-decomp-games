#include "m2c.h"

M2C_UNK func_020339a0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020339bc(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02091e0c;
extern M2C_UNK data_020cae6c;

void func_02073d9c(s32 arg0) {
    if (arg0 != 0) {
        func_020339bc(&data_02091e0c, &data_020cae6c);
        return;
    }
    func_020339a0(&data_02091e0c, &data_020cae6c);
}
