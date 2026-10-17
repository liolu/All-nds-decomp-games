/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005da0(void *, void *);              /* extern */

void *func_02005e04(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) (arg2 + ((u32) (arg2 >> 8) >> 0x17)) >> 9);
    func_02005da0(arg0, arg0 + 0xC);
    return arg0;
}
