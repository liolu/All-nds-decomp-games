/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009584(s32, s32);                        /* extern */
s32 func_0200b054(s32, s32);                        /* extern */
s32 func_0200b540(s32, s32);                        /* extern */

void func_020ca638(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4   = func_0200b054(0x40400000, func_0200b540(arg1, arg0));
    temp_r4_2 = func_0200b540(func_0200b540(temp_r4, func_0200b054(0x40000000, arg2)), arg3);
    func_02009584(
        arg0,
        func_0200b054(
            arg4,
            func_02009584(
                arg2,
                func_0200b054(
                    arg4, func_02009584(
                              temp_r4_2,
                              func_0200b054(func_02009584(arg3, func_02009584(arg2, func_0200b054(0x40000000,
                                                                                                  func_0200b540(arg0, arg1)))),
                                            arg4))))));
}
