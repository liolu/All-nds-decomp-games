#include "m2c.h"

M2C_UNK func_0209c668(s32, void *);                 /* extern */
M2C_UNK func_0209f16c();                            /* extern */
M2C_UNK func_0209f18c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209f1b8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209f310(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020bf498;
extern M2C_UNK data_020d3cc4;

void *func_0209f1e4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0209f16c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf498;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    func_0209f18c(arg0 + 0x14, arg3);
    func_0209f1b8(arg0 + 0x34, arg3);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    func_0209c668(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    func_0209f310(arg0, arg1, arg2);
    return arg0;
}
