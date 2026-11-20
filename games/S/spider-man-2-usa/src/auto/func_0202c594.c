/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0210906c;
extern M2C_UNK data_02115d18;

void func_0202c594(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210906c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02115d18;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) (arg1 + 4);
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
}
