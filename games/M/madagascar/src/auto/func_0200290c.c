/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020bcc9c;
extern M2C_UNK data_020bcd98;

void func_0200290c(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcc9c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd98;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) *arg1;
    M2C_FIELD(arg0, void **, 8)    = (void *) (((s8 *) arg1 + 4));
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
}
