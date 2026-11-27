/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004430(void *);                      /* extern */
M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK);          /* extern */
void *func_0200f21c(s32, M2C_UNK);                  /* extern */
M2C_UNK func_02054434(void *, void *, s32);         /* extern */
s32 func_0205456c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020548bc(void *);                      /* extern */
extern M2C_UNK data_0210c2ac;
extern M2C_UNK data_0210c32c;
extern M2C_UNK data_0210c344;

void *func_020d7b4c(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c2ac;
    M2C_FIELD(arg0, void **, 0x34) = NULL;
    M2C_FIELD(arg0, void **, 0x38) = NULL;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    func_02004430(arg0 + 4);
    func_020548bc(arg0 + 0x40);
    if (func_0205456c(arg0 + 0x40, arg1) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_02054434(arg0 + 0x40, arg0 + 0x24, 0x10);
        if (arg3 == 0) {
            M2C_FIELD(arg0, void **, 0x34) = func_0200f21c(M2C_FIELD(arg0, s32 *, 0x28) * 0x10, 0);
        } else {
            M2C_FIELD(arg0, void **, 0x34) = func_0200f21c(M2C_FIELD(arg0, s32 *, 0x28) * 0x10, 1);
        }
        func_02054434(arg0 + 0x40, M2C_FIELD(arg0, void **, 0x34), M2C_FIELD(arg0, s32 *, 0x28) * 0x10);
        if (arg3 == 0) {
            M2C_FIELD(arg0, void **, 0x38) = func_0200f21c(M2C_FIELD(arg0, s32 *, 0x2C), 0);
        } else {
            M2C_FIELD(arg0, void **, 0x38) = func_0200f21c(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        }
        func_02054434(arg0 + 0x40, M2C_FIELD(arg0, void **, 0x38), M2C_FIELD(arg0, s32 *, 0x2C));
        func_0200e8c8(&data_0210c32c, arg1);
    } else {
        func_0200e8c8(&data_0210c344, arg1);
    }
    return arg0;
}
