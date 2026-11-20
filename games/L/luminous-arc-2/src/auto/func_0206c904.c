#include "m2c.h"

M2C_UNK func_0206e230();                            /* extern */
extern M2C_UNK data_021194bc;
extern M2C_UNK data_021194d4;

void *func_0206c904(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021194bc;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_021194d4;
    func_0206e230(arg0);
    return arg0;
}
