#include "m2c.h"

M2C_UNK func_020ab434(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020cf556;
extern M2C_UNK data_020cf574;
extern M2C_UNK data_020cf584;

void *func_020a4e90(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)       = &data_020cf574;
    M2C_FIELD(arg0, M2C_UNK **, 0x28660) = &data_020cf584;
    func_020ab434(arg0 + 0x28660, &data_020cf556);
    return arg0;
}
