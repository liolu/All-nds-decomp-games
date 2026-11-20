#include "m2c.h"

M2C_UNK func_0206f408(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020cdb80;
extern M2C_UNK data_020cebc5;

void *func_02089d54(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)         = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = &data_020cdb80;
    func_0206f408(arg0 + 0x50, &data_020cebc5);
    return arg0;
}
