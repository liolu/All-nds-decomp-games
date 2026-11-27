#include "m2c.h"

M2C_UNK func_02019f74(void *);                      /* extern */
M2C_UNK func_0203631c(void *);                      /* extern */
M2C_UNK func_020674ec(s32, M2C_UNK);                /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020de338;

void *func_0201ac24(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de338;
    func_020674ec(M2C_FIELD(arg0, s32 *, 0x120), 0x14);
    M2C_FIELD(arg0, s8 *, 0x124) = 0;
    func_0203631c(arg0 + 0x34);
    func_02019f74(arg0);
    func_020934a8(arg0);
    return arg0;
}
