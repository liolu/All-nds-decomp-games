#include "m2c.h"

M2C_UNK func_0206f408(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020cdb65;
extern M2C_UNK data_020cdb70;
extern M2C_UNK data_020cdb80;

void *func_0206f244(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cdb70;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020cdb80;
    func_0206f408(arg0 + 4, &data_020cdb65);
    return arg0;
}
