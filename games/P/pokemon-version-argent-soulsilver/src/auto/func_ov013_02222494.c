/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s16 func_ov013_02222a64(u16);
void func_ov013_02222988(void *, s32, s32);

void func_ov013_02222494(s16 *arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4, s8 arg5, s32 arg6) {
    arg0[0]           = func_ov013_02222a64((u16) 1);
    arg0[1]           = 0;
    arg0[2]           = 0;
    arg0[3]           = func_ov013_02222a64((u16) arg1);
    arg0[4]           = 0;
    arg0[5]           = func_ov013_02222a64((u16) arg2);
    arg0[6]           = func_ov013_02222a64((u16) arg3);
    ((s8 *) arg0)[14] = arg4;
    ((s8 *) arg0)[15] = arg5;
    func_ov013_02222988(arg0 + 8, arg6, 8);
}
