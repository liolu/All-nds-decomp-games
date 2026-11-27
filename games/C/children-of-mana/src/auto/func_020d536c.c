/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_ov009_02131574(s32);                   /* extern */

void func_020d536c(void *arg0, s32 arg1) {
    func_ov009_02131574(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x24) = 2;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}
