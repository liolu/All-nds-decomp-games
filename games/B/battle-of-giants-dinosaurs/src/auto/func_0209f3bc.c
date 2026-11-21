#include "m2c.h"

M2C_UNK func_0203b81c(void *);                      /* extern */
M2C_UNK func_0209c770(s32, void *);                 /* extern */
M2C_UNK func_0209c928(s32, s32, M2C_UNK, M2C_UNK, void *, s32); /* extern */
extern M2C_UNK data_020bf498;
extern M2C_UNK data_020d3cc4;

void *func_0209f3bc(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf498;
    temp_r0                        = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_r0 != 0) {
        func_0209c928(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x20), 0, 2, arg0, temp_r0);
    }
    func_0209c770(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    func_0203b81c(arg0);
    return arg0;
}
