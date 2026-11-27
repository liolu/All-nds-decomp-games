/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s16 MATH_CalcCRC16(s32, s32, M2C_UNK);              /* extern */
s32 verify(s32, s32, M2C_UNK, s32);                 /* extern */
s32 writeDisable();                                 /* extern */
M2C_UNK writeNvram(s32, M2C_UNK, s32);              /* extern */
extern M2C_UNK nv_result;

s32 DWCi_BACKUPlWriteAll(s32 arg0) {
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r6 = M2C_FIELD(&nv_result, s32 *, 8);
    var_r7 = arg0;
    var_r5 = 0;
    do {
        M2C_FIELD((arg0 + (var_r5 << 8)), s16 *, 0xFE) = MATH_CalcCRC16(arg0 + 0x500, var_r7, 0xFE);
    loop_2:
        writeNvram(var_r6, 0x100, var_r7);
        if (verify(var_r7, var_r6, 0x100, arg0 + 0x400) == 0) {
            goto loop_2;
        }
        var_r5 += 1;
        var_r7 += 0x100;
        var_r6 += 0x100;
    } while (var_r5 < 4);
    if (writeDisable() != 0) {
        return 1;
    }
    return 0;
}
