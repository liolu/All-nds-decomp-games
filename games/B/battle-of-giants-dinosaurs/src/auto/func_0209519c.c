#include "m2c.h"

M2C_UNK func_0203f75c();                            /* extern */
M2C_UNK func_0203f9d8();                            /* extern */
M2C_UNK func_0203fe7c();                            /* extern */
M2C_UNK func_0203ff7c();                            /* extern */
M2C_UNK func_02044c78();                            /* extern */
M2C_UNK func_02094bd8(s32);                         /* extern */
M2C_UNK func_02094d20(s32);                         /* extern */
M2C_UNK func_02094d58(s32);                         /* extern */
M2C_UNK func_02094e2c(s32);                         /* extern */
M2C_UNK func_02094eac(s32);                         /* extern */
M2C_UNK func_02094ed8(s32);                         /* extern */
M2C_UNK func_020950c8(s32);                         /* extern */
M2C_UNK func_02095300();                            /* extern */
s32 func_0209c84c(s32);                             /* extern */
extern M2C_UNK data_020d3cc4;
extern M2C_UNK func_020952c4;

void *func_0209519c(void *arg0) {
    func_0203f9d8();
    func_0203f75c();
    func_02095300();
    func_0203fe7c();
    func_0203ff7c();
    func_02044c78();
    M2C_FIELD(&data_020d3cc4, s32 *, 0x14) = (s32) (arg0 + 8);
    func_02094bd8(arg0 + 0xC);
    func_02094d20(arg0 + 0x1314);
    func_02094d58(arg0 + 0x1374);
    func_02094e2c(arg0 + 0x1528);
    func_02094eac(arg0 + 0x1CCC);
    func_02094ed8(arg0 + 0x1EF4);
    func_020950c8(arg0 + 0x1FA0);
    M2C_FIELD(&data_020d3cc4, M2C_UNK **, 0x28) = &func_020952c4;
    M2C_FIELD(arg0, s32 *, 4)                   = func_0209c84c(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C));
    return arg0;
}
