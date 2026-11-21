#include "m2c.h"

M2C_UNK func_0209c770(s32, void *);                 /* extern */
M2C_UNK func_0209c9bc(s32, void *, s32);            /* extern */
M2C_UNK func_0209ef30(void *);                      /* extern */
extern M2C_UNK data_020bf448;
extern M2C_UNK data_020d3cc4;

void *func_0209ed2c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf448;
    func_0209c9bc(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0, M2C_FIELD(arg0, s32 *, 0xC));
    func_0209c770(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    func_0209ef30(arg0 + 0x1FC);
    return arg0;
}
