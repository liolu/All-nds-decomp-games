#include "m2c.h"

M2C_UNK func_0203cdb8(s32, u8);                     /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020ded2c;

void *func_0203bea0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ded2c;
    func_0203cdb8(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, u8 *, 0x20));
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
