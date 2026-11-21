#include "m2c.h"

M2C_UNK func_0203b81c(void *);                      /* extern */
M2C_UNK func_0209c770(s32, void *);                 /* extern */
M2C_UNK func_0209ef08();                            /* extern */
extern M2C_UNK data_020bf3c0;
extern M2C_UNK data_020d3cc4;

void *func_0209ef74(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf3c0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    func_0209ef08(arg0);
    func_0209c770(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    func_0203b81c(arg0);
    return arg0;
}
