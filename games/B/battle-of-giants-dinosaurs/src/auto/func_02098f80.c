#include "m2c.h"

M2C_UNK func_02097ae0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02098758(s32, void *);                 /* extern */
M2C_UNK func_02098ed4(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02099f04(s32);                         /* extern */
extern M2C_UNK data_020bf5f0;
extern M2C_UNK data_020c0308;
extern M2C_UNK data_020c0310;
extern M2C_UNK data_020d3cc4;

void *func_02098f80(void *arg0, s32 arg1, M2C_UNK *arg2) {
    s32 var_r5;

    var_r5 = arg1;
    func_02098ed4(arg0, &data_020c0308, 0xE9);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf5f0;
    if (var_r5 == 0) {
        var_r5 = M2C_FIELD(&data_020d3cc4, s32 *, 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = var_r5;
    func_02099f04(var_r5);
    if (arg2 != NULL) {
        func_02097ae0(arg0, arg2);
    } else {
        func_02097ae0(arg0, &data_020c0310);
    }
    func_02098758(M2C_FIELD(&data_020d3cc4, s32 *, 0x24), arg0);
    return arg0;
}
