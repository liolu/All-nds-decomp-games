#include "m2c.h"

M2C_UNK func_0203b81c(void *);                      /* extern */
M2C_UNK func_0209b3ec(s32, void *);                 /* extern */
M2C_UNK func_0209be38(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern M2C_UNK data_020bf810;
extern M2C_UNK data_020bf854;
extern M2C_UNK data_020d3cc4;

void *func_0209bdd8(void *arg0) {
    void *var_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf810;
    var_r1                         = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020bf854;
    if (arg0 != NULL) {
        var_r1 = arg0 + 4;
    }
    func_0209b3ec(M2C_FIELD(&data_020d3cc4, s32 *, 0x18), var_r1);
    func_0209be38(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(&data_020d3cc4, s32 *, 0xC), 0, 0);
    func_0203b81c(arg0);
    return arg0;
}
