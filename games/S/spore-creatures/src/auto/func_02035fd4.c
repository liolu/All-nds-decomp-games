#include "m2c.h"

M2C_UNK func_02035f24(void *, M2C_UNK);             /* extern */
M2C_UNK func_020966e0(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_ov003_0214c1c8;

void *func_02035fd4(void *arg0) {
    func_02035f24(arg0, 3);
    func_020966e0(arg0, &data_ov003_0214c1c8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~1);
    return arg0;
}
