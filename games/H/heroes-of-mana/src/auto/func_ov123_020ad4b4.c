/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK MIi_CpuCopy32(s32, s32, s32);               /* extern */
s32 func_ov123_02068dcc(u16);                       /* extern */
M2C_UNK func_ov123_02068e44(s32);                   /* extern */
s32 func_ov123_02068ee0();                          /* extern */

s32 func_ov123_020ad4b4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    func_ov123_02068e44(1);
    temp_r0 = func_ov123_02068ee0();
    if (temp_r0 > 0) {
        var_r4 = 0;
        if (temp_r0 > 0) {
        loop_2:
            if (var_r4 < arg1) {
                MIi_CpuCopy32(func_ov123_02068dcc((u16) var_r4), var_r5, 0xC0);
                var_r4 += 1;
                var_r5 += 0xC0;
                if (var_r4 < temp_r0) {
                    goto loop_2;
                }
            }
        }
    }
    func_ov123_02068e44(0);
    return temp_r0;
}
