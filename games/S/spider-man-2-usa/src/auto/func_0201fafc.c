/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f9e0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0205a2a0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 data_0215bf14;
extern M2C_UNK data_0215bf18;
extern M2C_UNK data_0215bf24;
extern M2C_UNK func_0201f9a8;

M2C_UNK *func_0201fafc(void) {
    if (!(data_0215bf14 & 1)) {
        func_0201f9e0(&data_0215bf24, 1);
        func_0205a2a0(&data_0215bf24, &func_0201f9a8, &data_0215bf18);
        data_0215bf14 |= 1;
    }
    return &data_0215bf24;
}
