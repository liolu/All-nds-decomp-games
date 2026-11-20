/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032e14(void *, s32);                 /* extern */
void *func_0203a6c0(M2C_UNK);                       /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_02123edc;
extern M2C_UNK data_02123f08;

void *func_02032e30(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0)                             = &data_020ffeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0)                             = &data_02123edc;
    M2C_FIELD(arg0, s32 *, 0x1C)                               = arg2;
    M2C_FIELD(arg0, void **, 0x18)                             = func_0203a6c0(0xF0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), M2C_UNK **, 0xC) = &data_02123f08;
    M2C_FIELD(arg0, s32 *, 0xC)                                = -1;
    if (arg1 != 0) {
        func_02032e14(arg0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x91;
    return arg0;
}
