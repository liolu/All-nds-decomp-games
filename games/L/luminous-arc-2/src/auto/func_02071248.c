#include "m2c.h"

M2C_UNK func_0200509c(M2C_UNK *);                   /* extern */
M2C_UNK func_02005638(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0216fdb8;
extern M2C_UNK data_0216fddc;
extern M2C_UNK data_0216fea0;
extern M2C_UNK data_0216fec0;

void func_02071248(void) {
    M2C_FIELD(&data_0216fdb8, s8 *, 9) = 1;
    func_02005638(&data_0216fea0, &data_0216fec0, 0);
    M2C_FIELD(&data_0216fdb8, s8 *, 5) = 0;
    func_0200509c(&data_0216fddc);
}
