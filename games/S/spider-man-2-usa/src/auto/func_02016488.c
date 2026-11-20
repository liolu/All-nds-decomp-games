/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016548(s32 *, s32, s32);             /* extern */
s32 func_02016558(s32, u32);                        /* extern */
extern s32 data_0215b484;
extern s32 data_0215b488;
extern s32 data_0215b48c;

s32 func_02016488(s32 arg0, s32 arg1, u32 arg2) {
    s32 sp0;
    s32 temp_r0;

    sp0 = 0;
    func_02016548(&sp0, arg1, (0x1FFFFF & (arg2 >> 2)) | 0x05000000);
    if (arg0 & 2) {
        data_0215b48c = arg1;
        return func_02016558(arg1, arg2);
    }
    if (arg0 & 1) {
        data_0215b488 = arg1;
        return func_02016558(arg1, arg2);
    }
    temp_r0 = arg0 & 4;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    data_0215b484 = arg1;
    return func_02016558(arg1, arg2);
}
