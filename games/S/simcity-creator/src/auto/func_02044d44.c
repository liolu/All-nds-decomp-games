#include "m2c.h"

s16 func_02044fcc();                                /* extern */
extern M2C_UNK data_020dd620;

void func_02044d44(void *arg0, s32 arg1) {
    M2C_FIELD(&data_020dd620, s32 *, 4)    = arg1;
    M2C_FIELD(&data_020dd620, s32 *, 8)    = (s32) (arg0 + 0x488);
    M2C_FIELD(arg0, s16 *, 0x458)          = 0;
    M2C_FIELD(arg0, s16 *, 0x45A)          = func_02044fcc(arg0);
    M2C_FIELD(arg0, s32 *, 0x45C)          = 0;
    M2C_FIELD(arg0, s32 *, 0x460)          = 0;
    M2C_FIELD(arg0, s32 *, 0x464)          = 0;
    M2C_FIELD(arg0, s32 *, 0x474)          = 0;
    M2C_FIELD(arg0, s32 *, 0x478)          = 0;
    M2C_FIELD(&data_020dd620, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x600)          = 0;
    M2C_FIELD(arg0, s32 *, 0x608)          = 0;
    M2C_FIELD(arg0, s32 *, 0x604)          = 0;
    M2C_FIELD(arg0, s32 *, 0x60C)          = 0;
    M2C_FIELD(arg0, s32 *, 0x47C)          = 0;
    M2C_FIELD(arg0, s32 *, 0x610)          = 0;
    M2C_FIELD(arg0, s32 *, 0x468)          = 0;
    M2C_FIELD(arg0, s32 *, 0x46C)          = 0;
}
