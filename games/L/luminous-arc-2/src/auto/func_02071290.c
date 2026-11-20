#include "m2c.h"

M2C_UNK func_02005638(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0216fdb8;
extern M2C_UNK data_0216fea0;
extern M2C_UNK data_0216fec0;

void func_02071290(void) {
    if (M2C_FIELD(&data_0216fdb8, u8 *, 9) == 1) {
        return;
    }
    func_02005638(&data_0216fea0, &data_0216fec0, 0);
}
