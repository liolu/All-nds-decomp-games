#include "m2c.h"

M2C_UNK func_02074670(void *);                      /* extern */
M2C_UNK func_0208696c(s32);                         /* extern */
extern M2C_UNK data_020ce3f0;

void *func_020763cc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ce3f0;
    func_0208696c(arg0 + 0x10);
    func_02074670(arg0 + 0x74);
    M2C_FIELD(arg0, s8 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x6C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x6D)  = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    return arg0;
}
