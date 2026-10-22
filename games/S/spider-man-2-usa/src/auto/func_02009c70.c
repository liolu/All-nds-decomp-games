/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008860(void *);                      /* extern */
M2C_UNK func_02008c0c(void *, s32);                 /* extern */
extern s32 data_021581b0;

void func_02009c70(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) data_021581b0;
    M2C_FIELD(arg0, s32 *, 0x394) = (s32) data_021581b0;
    M2C_FIELD(arg0, s32 *, 0x398) = (s32) data_021581b0;
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) data_021581b0;
    func_02008c0c(arg0, M2C_FIELD(arg0, s32 *, 0x378));
    func_02008860(arg0);
}
