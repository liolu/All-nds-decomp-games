#include "m2c.h"

M2C_UNK func_0203cdb8(s32, u8);                     /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
extern M2C_UNK data_020ded2c;

void *func_0203be70(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ded2c;
    func_0203cdb8(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, u8 *, 0x20));
    func_0208acbc(arg0 + 4);
    return arg0;
}
