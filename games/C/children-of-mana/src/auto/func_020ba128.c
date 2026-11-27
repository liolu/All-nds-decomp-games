/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a55c(s32, s32);                    /* extern */
s32 func_0200ad14();                                /* extern */
s32 func_0200af0c(u32);                             /* extern */
void *func_020b9ff8();                              /* extern */

void func_020ba128(s32 arg0, u32 arg1, u32 *arg2, s32 *arg3) {
    s32 temp_r4;
    u32 temp_r1;
    void *temp_r0;

    temp_r0 = func_020b9ff8();
    temp_r1 = arg1 % (u8) M2C_FIELD(temp_r0, u8 *, 0);
    *arg2   = temp_r1 % (u8) M2C_FIELD(temp_r0, u8 *, 1);
    temp_r4 = func_0200af0c(temp_r1);
    func_0200a55c(temp_r4, func_0200af0c((u32) M2C_FIELD(temp_r0, u8 *, 1)));
    *arg3 = func_0200ad14();
}
