#include "m2c.h"

M2C_UNK func_0203b81c(void *);                      /* extern */
M2C_UNK func_02098888(s32, void *);                 /* extern */
M2C_UNK func_02099ff8(s32);                         /* extern */
extern M2C_UNK data_020bf5f0;
extern M2C_UNK data_020bf654;
extern M2C_UNK data_020d3cc4;

void *func_0209904c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf5f0;
    func_02098888(M2C_FIELD(&data_020d3cc4, s32 *, 0x24), arg0);
    func_02099ff8(M2C_FIELD(arg0, s32 *, 0x5C));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf654;
    func_0203b81c(arg0);
    return arg0;
}
