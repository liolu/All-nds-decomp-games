#include "m2c.h"

M2C_UNK func_0203b91c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02098174(void *);                      /* extern */
extern M2C_UNK data_020b91ec;
extern M2C_UNK data_020b91fc;
extern M2C_UNK data_020bf244;
extern M2C_UNK data_020bf254;
extern M2C_UNK data_020d3cc4;
extern M2C_UNK func_02098250;
extern M2C_UNK func_0209825c;

void *func_02094d58(void *arg0) {
    func_0203b91c(arg0, 7, 0x38, &func_02098250, &func_0209825c);
    M2C_FIELD(arg0, s32 *, 0x18C)            = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x194)       = &data_020bf254;
    M2C_FIELD(arg0, s32 *, 0x198)            = 0;
    M2C_FIELD(arg0, s32 *, 0x19C)            = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x194)       = &data_020b91fc;
    M2C_FIELD(arg0, M2C_UNK **, 0x1A0)       = &data_020bf244;
    M2C_FIELD(arg0, s32 *, 0x1A4)            = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8)            = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1A0)       = &data_020b91ec;
    M2C_FIELD(&data_020d3cc4, void **, 0x24) = arg0;
    func_02098174(arg0);
    return arg0;
}
