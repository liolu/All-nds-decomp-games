#include "m2c.h"

extern M2C_UNK data_0209af08;
extern M2C_UNK func_02049038;
extern M2C_UNK func_02049050;
extern M2C_UNK func_02049164;
extern M2C_UNK func_020491cc;
extern M2C_UNK func_020491e8;

void func_02048fc8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020491e8;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_02049164;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020491cc;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_02049050;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_02049038;
    M2C_FIELD(arg0, s32 *, 0x68)      = 0;
    M2C_FIELD(arg0, s32 *, 0x6C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x14)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x70) = &data_0209af08;
    M2C_FIELD(arg0, s32 *, 0x74)      = 0x7B;
    M2C_FIELD(arg0, s32 *, 0x78)      = 0;
    M2C_FIELD(arg0, s32 *, 0x7C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x80)      = 0;
}
